// Simple_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	
		double v1;
		double v2;
		double op;

		std::cout << "Welcome to the C++ Calculator\n";
		std::cout << "Enter your first digit\n";
		std::cin >> v1;

		std::cout << "Enter your second digit\n";
		std::cin >> v2;

		std::cout << "Choose your operation\n";
		std::cout << " 1)Add  2)Subtract  3)Multiply  4)Divide \n";
		std::cin >> op;

		if (op == 1) {
			std::cout << "the answer is: " << v1 + v2 << "\n";
		}
		else if (op == 2) {
			std::cout << "the answer is: " << v1 - v2 << "\n";
		}
		else if (op == 3) {
			std::cout << "the answer is: " << v1 * v2 << "\n";
		}
		else if (op == 4) {
			std::cout << "the answer is: " << v1 / v2 << "\n";
		}
		else {
			std::cout << "Error: Invalid operation. Please choose from the four options given above.\n";
		}
		std::cout << "Thanks for using calc!\n" << std::endl;

		return main();
	}

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu



