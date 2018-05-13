#pragma once


#include <string>
#include <fstream>
#include <cassert>
#include <iostream>
#include <stdint.h>
#include <set>
#include "Point.hpp"
#include <cmath>
#include <vector>
#define SIZE_HEADER 80
#define SIZE_POINT sizeof(float)*3
namespace stl
{
	inline float find_distance(point* p1, point* p2)	// function for calculating the distance between 2 poins
	{
		return sqrt(pow(p1->_x - p2->_x, 2) + pow(p1->_y - p2->_y, 2) + pow(p1->_z - p2->_z, 2));
	}
	  
	template<typename T>
	struct Compare_mark		// compare function for sorting by marks in std::multiset
	{
		bool operator()(const T & L, const T & R) const
		{
			return L->_mark < R->_mark;
		}
	};


	class stl_info		// class that contains information from stl-file
	{					// and methods to work with it
		std::string _header;
		uint32_t _num_of_triangles;
		ptr_point_set _points;   // the set of our pointers to our points(vertices) without dublicats
	private:
		float stl_read_float(std::ifstream &f)  //small functions for reading from file.
		{
			float num;
			f.read((char*)&num, sizeof(float));
			return num;
		}
		point stl_read_point(std::ifstream &f)
		{
			float x = stl_read_float(f);
			float y = stl_read_float(f);
			float z = stl_read_float(f);
			return point(x, y, z);
		}
		void insert_points(point * v1, point * v2, point *v3)	// method for insertion readed points in set.
		{
			using Pair = std::pair<stl::ptr_point_set::iterator, bool>;
			Pair pair1, pair2, pair3;
			pair1 = _points.insert(v1);
			pair2 = _points.insert(v2);
			pair3 = _points.insert(v3);
			(*pair1.first)->set_adjacent((*pair2.first), (*pair3.first));	// insertion adjacent points.
			(*pair2.first)->set_adjacent((*pair1.first), (*pair3.first));
			(*pair3.first)->set_adjacent((*pair1.first), (*pair2.first));

			if (!pair1.second) {	// if there was no insertion we should delete memory
				delete v1;
			}
			if (!pair2.second) {
				delete v2;
			}
			if (!pair3.second) {
				delete v3;
			}
			

		}
	public:
        stl_info() : _header(""), _points(), _num_of_triangles() {}
		int get_size()
		{
			return _points.size();
		}
		point get_point(int position)	//returning copy of point on this position
		{
			if (position < _points.size() && position >= 0) {
				auto iter = _points.begin();
				for (int i = 0; i < position; ++i) {
					iter++;
				}
				return *(*iter);							
			}
			else {
				std::cout << "Position is too big or less than zero!" << std::endl;
				assert(false);		//error
            }
		}
		int stl_parse(const std::string & path)	// parsing stl-file, returns 1 if it's OK
		{
			std::ifstream file(path.c_str(), std::ios::in | std::ios::binary);

			if (!file)
			{
				std::cout << "ERROR. FILE DOESN'T EXIST" << std::endl;
				return 0;
			}
			std::cout << "Parsing . . .";	//info about the beginning of parsing

			char header_buff[SIZE_HEADER];
			file.read(header_buff, SIZE_HEADER);	// reading 80 bytes - header

			_header = header_buff;
			uint32_t number_of_triangles;

			file.read((char*)&number_of_triangles, sizeof(uint32_t));	// reading 4 bytes  - number of triangles
			this->_num_of_triangles = number_of_triangles;
			for (uint32_t i = 0; i < number_of_triangles; ++i)
			{
				file.seekg(SIZE_POINT, std::ios::cur);		// point normal - we don't need it

				point *v1 = new point(stl_read_point(file));	// reading our vertices
				point *v2 = new point(stl_read_point(file));
				point *v3 = new point(stl_read_point(file));
				
				file.seekg(sizeof(uint16_t), std::ios::cur);	// 2 bytes attribute byte count - we don't need it
				this->insert_points(v1, v2, v3);
				

			}
			std::cout << "\r                  \r";// end of parsing
			return 1;
		}
		float Dijkstra_algo( point &start, point &end)		//returns the shortest path between 2 points, or -1 if points doesn't exist
		{
			if (this->_num_of_triangles == 0)                
				return -1;
			using iter = std::set<point*>::iterator;
			iter it_start, it_end;
			it_start = this->_points.find(&start);
			if (it_start == this->_points.end()) {
				std::cout << "ERROR \nStart point does'n exist! \n";
				return -1;
			}
			
			it_end = this->_points.find(&end);
			if (it_end == this->_points.end()) {
				std::cout << "ERROR \nEnd point does'n exist! \n";
				return -1;
			}
			std::cout << "Searching . . .";
			point *p_end = (*it_end);       //creation pointers to make code more readable
			point * p_Cur = (*it_start);
			std::multiset<point*, Compare_mark<point*>> mlt; //multiset for our points and finding shortest path

			p_Cur->_mark = 0;
			mlt.insert(p_Cur);
			while (!p_end->_flag) {			// while p_end's flag == false we didn't find shortest path
				iter it_Min = mlt.begin();	//	searching unfrozen(flag == false) point with minimal mark
				while (true) {
					if (!(*it_Min)->_flag)
						break;
					it_Min++;
					if (it_Min == mlt.end()) {	// if all points are frozen
						std::cout << "\rThere is no connection between points" << std::endl; // /r to erase a line "Start serching . . ."
						return -1;
					}
				}
				p_Cur = (*it_Min);	// just for more readable i use pointers instead iterators
				iter it_pAdj = p_Cur->_adjacent.begin();		
				for (size_t i = 0; i < p_Cur->_adjacent.size(); ++i, ++it_pAdj) { //loop to set and check all adjacent points
					point * pAdj = (*it_pAdj);	// creating pointer Adjacent for more readable
					
					if (!pAdj->_flag) {	// if point frozen(flag == true) we don't do anything with it
										// if unfrozen - we should check mark
						float path = find_distance(p_Cur, pAdj) + p_Cur->_mark;	// the path to pAdj through p_Cur

						if (pAdj->_mark == INFINITY) {	// if mark was INF, insert new point with new mark
							pAdj->_mark = path;			// in multiset
							mlt.insert(pAdj);
						}
						else if (path < pAdj->_mark) {	// if the new path is shorter, we should delete from multiset our point
														// and insert again in new position
							
							auto pair = mlt.equal_range(pAdj); //  finding our point, but points can contain equal marks
							while (true) {
								if ((*pair.first) == pAdj)
									break;
								pair.first++;
							}
							mlt.erase(pair.first);	//deleting point from multiset
							pAdj->_mark = path;		//establish a new mark
							mlt.insert(pAdj);		//insert this point in right position in multiset
						}	
					}		
				}
				p_Cur->_flag = true;	//freezing point (we found the shortest path to this point - mark)
			}
			std::cout << "\r                        \r";//end of searching (erase a line "Start serching . . .")
			float answer = p_end->_mark;	// copying answer
			for (auto it = mlt.begin(); it != mlt.end(); ++it) {	// returning amended points in initial position
				(*it)->_flag = false;
				(*it)->_mark = INFINITY;
			}
			

			return answer;	// returning the shortest path from start point to end point
		}		
        std::vector<point*> get_points(float  x, float y, float z, float range)
        {

            auto iter_end = _points.begin(), iter_beg = _points.begin(), iter_temp = _points.begin();
            bool check = false;
            while((*iter_temp)->_x <= x+range ) {
                if(check == false && (*iter_temp)->_x >= x-range ) {
                    iter_beg = iter_temp;
                    check = true;
                }
                iter_temp++;
            }
            iter_end = --iter_temp;
            std::vector<point*> vc_x(iter_beg,iter_end);
            std::vector<point*> vc_y;
            for(int i=0; i < vc_x.size(); ++i) {
                if(vc_x[i]->_y >= y-range && vc_x[i]->_y <= y+range)
                    vc_y.push_back(vc_x[i]);
            }

            std::vector<point*> vc_z;
            for(int i=0; i < vc_y.size(); ++i) {
                if(vc_y[i]->_z >= y-range && vc_y[i]->_z <= y+range)
                    vc_z.push_back(vc_y[i]);
            }

            return vc_z;
        }

    };

}
