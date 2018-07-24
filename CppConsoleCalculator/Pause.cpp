#include "stdafx.h"
#include <iostream>

void pause() {
	std::cout << "Press any key to continue..." << std::endl;
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();
}