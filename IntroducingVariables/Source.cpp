#include <iostream>

int main()
{
	// Create a variable to hold the number entered
	int numEntered = 0;

	// Print out a message to tell the user to enter a number
	std::cout << "Enter a whole number between 1 and 10: ";

	// Store the number the user enters in the "numEntered" variable
	std::cin >> numEntered;

	// Print out a new line to space out our text better
	std::cout << "\n";

	// Add 3 to the number entered
	
	std::cout << "The number entered plus three equals: " << finalResult << "\n";

	return 0;

	int numEntered1 = 0;
	int numEntered2 = 0;
	int numEntered3 = 0;

	std::cout << "Enter a whole number: ";
	std::cin >> numEntered1;
	std::cout << "Enter another whole number: ";
	std::cin >> numEntered2;
	std::cout << "Enter a third whole number: ";
	std::cin >> numEntered3;
	std::cout << "\n";
	int finalResult = numEntered1 + numEntered2 + numEntered3 / 3;
	std::cout << "The average of the three numbers is: " << finalResult << "\n";
}

