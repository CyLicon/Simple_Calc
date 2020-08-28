// Simple_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>

int main()
{
	std::cout << "Welcome to the C++ Calculator!\n";
	int imagine = 2;
	double v1 = 1;
	double v2;
	int op;
	
	while (v1 != 0) {
		
		std::cout << "Enter your first number or press 0 to exit.\n";
		std::cin >> v1;

		if (v1 != 0) {


				std::cout << "Enter your next number: \n";
				std::cin >> v2;

				std::cout << "Choose your operation\n";
				std::cout << " 1)Add  2)Subtract  3)Multiply  4)Divide \n";
				std::cin >> op;

				switch(op) {

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
					std::cout << "Error: Invalid operation or character. Please type correct numericals and choose from the four options given above.\n";
					break;
				}

					}
		else 
		{
			std::cout << "Thanks for using calc!\n" << std::endl;
			void exit();
		}

	}
}
	

	// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
	// Debug program: F5 or Debug > Start Debugging menu



