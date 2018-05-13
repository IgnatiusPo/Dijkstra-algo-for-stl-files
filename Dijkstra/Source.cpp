#include <iostream>
#include "stl_info.hpp"
#include <conio.h>
#include "mainwindow.h"
#define ESC 27	//27 ASCII of Escape
#define ONE 49	//49 ASCII of 1
#include <crtdbg.h>
int main()
{
<<<<<<< HEAD

=======
    stl::stl_info info;
    std::string str = "D://GIT//Repos//Dijkstra-algo-for-stl-files//Examples_stl_files//batarang.stl";
    info.stl_parse(str);
    std::vector<stl::point*> vc(info.get_points(-3, 0, 0, 10));
    std::cout << *(*vc.begin());

    if (_CrtDumpMemoryLeaks())
        std::cout << "Memory Leaks" << std::endl;
    else
        std::cout << "Memory OK" << std::endl;

	
	return 0;
>>>>>>> Iga-branch
}
