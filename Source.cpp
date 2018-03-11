#include <iostream>
#include "stl_info.hpp"
#include <conio.h>
#define ESC 27	//27 ASCII of Escape
#define ONE 49	//49 ASCII of 1

int main()
{
	while(true) {	//i know, looks crappy, but that is only a wrapper instead of GUI to work with this program
					// that's only test case
		system("cls");			
		std::cout << "Enter full path to stl-file like \"E:\\directory\\file.stl\"" << std::endl;
		std::string path;
		std::cin >> path;
		system("cls");
		stl::stl_info info;
		if (!info.stl_parse(path)) {
			system("pause");	// pause to read ERROR-message if path is uncorrect
			continue;
		}	
		std::cout << "Enter 1 if you don't know points and just want to check how does algorithm works\n\n";
		std::cout << "Enter another case if you know points and you want to know the shortest path between them";
		
		if (_getch() == ONE) {
			system("cls");
			std::cout << "Enter postion of point 1 and position of point 2 in the range: 0 - ";//position in set to check how does algo works
			std::cout << info.get_size() - 1 << std::endl;										//to do not guess the points
			
			int pos1, pos2;
			std::cin >> pos1;
			std::cin >> pos2;
			
			stl::point p1 = info.get_point(pos1);
			stl::point p2 = info.get_point(pos2);

			std::cout << "point 1: " << p1 << std::endl;
			std::cout << "point 2: " << p2 << std::endl;
			std::cout << "The shortest path is: " << info.Dijkstra_algo(p1, p2) << std::endl;
		}
		else {
			system("cls");
			std::cout << "Enter x, y and z coordinates for point 1: \n";
			float x, y, z;
			std::cin >> x >> y >> z;
			stl::point p1(x, y, z);
			std::cout << "Enter x, y and z coordinates for point 2: \n";
			std::cin >> x >> y >> z;
			stl::point p2(x, y, z);
			std::cout << "point 1: " << p1 << std::endl;
			std::cout << "point 2: " << p2 << std::endl;
			std::cout << "The shortest path is: " << info.Dijkstra_algo(p1, p2) << std::endl;
		}	
		std::cout << "Enter ESC to exit and any another case to continue" << std::endl;
		if (_getch() == ESC)
			return 0;
	}
	

	if (_CrtDumpMemoryLeaks())
		std::cout << "Memory Leaks" << std::endl;
	else
		std::cout << "Memory OK" << std::endl;
	
	return 0;
}