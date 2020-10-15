// Simple_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h>

int main()
{

	int cnt = 1;
	double v1 = 1;
	double v2;
	int op;
	std::cout << "Welcome to the C++ Calculator!\n";

	while (cnt == 1) {

		std::cout << "Enter your first number: ";
		std::cin >> v1;

		std::cout << "Enter your next number: ";
		std::cin >> v2;

		std::cout << "Choose your operation\n";
		std::cout << " Press 1 to add, 2 to subtract, 3 to multiply and 4 to divide: ";
		std::cin >> op;

		switch (op) {

		case 1:
			std::cout << "Your answer is: " << v1 + v2 << "\n";
			break;
		case 2:
			std::cout << "Your answer is: " << v1 - v2 << "\n";
			break;
		case 3:
			std::cout << "Your answer is: " << v1 * v2 << "\n";
			break;
		case 4:
			std::cout << "Your answer is: " << v1 / v2 << "\n";
			break;
		default:
			std::cout << "Error: Unsupprted character/numerical. Please type correct numericals and choose from the four options given above.\n";
			break;
		}

		std::cout << "Do you wish to continue?\n";
		std::cout << "Press 0 to exit or 1 to continue: ";
		std::cin >> cnt;
		if (cnt == 0) {
			std::cout << "Thanks for using calc!\n";
			void exit();
			system("pause");
		}
	}
	while (cnt > 1 || cnt < 0) {

		std::cout << "Error: Unsupprted character/numerical. Please type correct numericals and choose from the two options given above.\n";
		std::cout << "Do you wish to continue?\n";
		std::cout << "Press 0 to exit or 1 to continue: ";
		std::cin >> cnt;

		if (cnt == 1) {
			return main();

		}
		else {
			void exit();

		}
		system("pause");

	}

}