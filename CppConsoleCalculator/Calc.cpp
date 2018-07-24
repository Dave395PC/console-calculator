#include "stdafx.h"
#include <iostream>

int calc() {
	//Tells the user what operators they can use
	std::cout << "Calculator App: Supports +, -, *, /" << std::endl;

	//Lets the user enter the first value
	std::cout << "Enter an Integer: ";
	int numone;
	std::cin >> numone;

	//Lets the user enter the operator to use
	std::cout << "Enter an Operator: ";
	char op;
	std::cin >> op;

	//Lets the user enter a second value
	std::cout << "Enter an Integer: ";
	int numtwo;
	std::cin >> numtwo;

	//Initialises ans var with value of 0
	int ans = 0;

	//In the var "op", test if the value is one of these with "case 'operator' "
	switch (op) {
	case '+':
		ans = numone + numtwo;
		break;

	case '-':
		ans = numone - numtwo;
		break;

	case '*':
		ans = numone * numtwo;
		break;

	case '/':
		ans = numone / numtwo;
		break;

	case 'd':
		ans = 101;
		std::cout << "Size of op var is:/t/t" << sizeof(op) << std::endl;
		std::cout << "Size of ans var is:/t/t" << sizeof(ans) << std::endl;
		std::cout << "Size of numone var is:/t" << sizeof(numone) << std::endl;
		std::cout << "Size of numtwo var is:/t" << sizeof(numtwo) << std::endl;
		break;

		//If the user uses a different operator, tell the user and skip the rest of the function
	default:
		std::cout << "Error: " << op << " is not a valid operator." << std::endl;
		return 1;
		break;
	}

	//Tells the user the answer and returns it
	std::cout << " " << op << " used, the answer is: " << ans << std::endl;
	return ans;
}