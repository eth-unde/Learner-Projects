// This program will collect two numbers from the user, 
// then add them together and return the result.

// Allows the program to collect input from the user, and output to the console.
#include <iostream>

// This function accepts two integers, then adds them and returns the result
// as an integer.
static int add(int num1, int num2) {

	int result{ num1 + num2 };
	return result;
}

int main() {
	
	// These hold the first and second integers, and the result.
	int result{};
	int num1{};
	int num2{};

	// This section collects the numbers to be added.
	std::cout << "Please enter a number: ";
	std::cin >> num1;

	std::cout << "\nPlease enter another number: ";
	std::cin >> num2;

	// Calls the addition function for the two numbers, then assigns the result.
	result = add(num1, num2);
	
	// Prints the result to the console.
	std::cout << "\nThe result is: " << result << std::endl;

	return 0;
}