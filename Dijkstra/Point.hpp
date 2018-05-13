#pragma once
#include <iostream>
#include <windows.h>
#include <cmath>
<<<<<<< HEAD
#include <set>
=======
#include <QString>
<<<<<<< HEAD
#include <set>
=======
>>>>>>> 5cb094bf603630f4d020933c641dbc6a9b351794
>>>>>>> 73c5636516d1604ec03ac94f2471cd274ac193c9
namespace stl
{


	template<typename T>
	struct Compare_coordinates      // Compare function for our points in std::set
	{
		bool operator()(const T & L, const T & R) const			
		{
			if (L->_x != R->_x)
				return L->_x < R->_x;
			if (L->_y != R->_y)
				return L->_y < R->_y;
			if (L->_z != R->_z)
				return L->_z < R->_z;
			return  false;			// if points are eaqual returns false

		}
	};
	

	struct point		// struct point that contains 3 coordinates,
	{					// set of pointers to adjacent points, mark (the shortest path), 
		float _x;		// and bool flag - is this mark really the shortest path.
		float _y;
		float _z;

		std::set<point*, Compare_coordinates<point*>> _adjacent;
		bool _flag;
		float _mark;

        point() : _x(0), _y(0), _z(0), _adjacent(), _flag(false), _mark(INFINITY) {}		// in the beginning mark = INF
		point(float x, float y, float z) : _x(x), _y(y), _z(z) , _flag(0), _mark(INFINITY) {}

		void set_adjacent(point* p)			
		{
			_adjacent.insert(p);
		}
		void set_adjacent(point* p1, point *p2)
		{
			_adjacent.insert(p1);
			_adjacent.insert(p2);
		}
		friend std::ostream &operator<<(std::ostream& out, const point& p)
		{
			out << "x = " << p._x << " y = " << p._y << " z = " << p._z << ' ';
			return out;
		}
        QString get_info()
        {
            QString str_x, str_y, str_z, str_res;
            str_x = _x;
            str_y = _y;
            str_z = _z;
            str_res = str_x + " " + str_y + " " + str_z;
            return str_res;
        }

	};



	class ptr_point_set : public std::set<point*, Compare_coordinates<point*>>   // to do not think about memory i decided to 
	{																			 // make my own set with virtual destructor 
	public:
        ptr_point_set() : std::set<point*, Compare_coordinates<point*>>() {}
		virtual ~ptr_point_set()
		{
			auto iter = this->begin();
			while (iter != this->end()) {
				delete (*iter);
				iter++;
			}

		}
	};


}
