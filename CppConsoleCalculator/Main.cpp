// Main.cpp : Defines the entry point for the console application.
//

//C++ libraries
#include "stdafx.h"
#include <iostream>
#include "funcs.h"

int main() {
	//Runs the calculator, put it in a function so the main() func is smaller.
	calc();

	//Acts as a pause so you can see the results but still exit out with a button press, covered in 0.7 of LearnCpp
	pause();
	return 0;
}