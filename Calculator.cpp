// Calculator Version 1.0

#include <iostream>

static float add(float num1, float num2) {
	float result{ num1 + num2 };
	return result;
}

static float subtract(float num1, float num2) {
	float result{ num1 - num2 };
	return result;
}

static float multiply(float num1, float num2) {
	float result{ num1 * num2 };
	return result;
}

static float divide(float num1, float num2) {
	float result{ num1 / num2 };
	return result;
}

static float printResult(float result) {
	std::cout << "\nThe result is: " << result << std::endl;
	return 0;
}

int main() {

	float num1{};
	float num2{};
	int operation{};
	float result{};

	std::cout << "Please enter a number: ";
	std::cin >> num1;

	std::cout << "\nPlease enter another number: ";
	std::cin >> num2;

	std::cout << "\nChoose an operation (1-ADD, 2-SUB, 3-MULT, 4-DIV): ";
	std::cin >> operation;

	switch (operation) {
	 
	case 1:
		result = add(num1, num2);
		printResult(result);
		break;
	case 2:
		result = subtract(num1, num2);
		printResult(result);
		break;
	case 3:
		result = multiply(num1, num2);
		printResult(result);
		break;
	case 4:
		result = divide(num1, num2);
		printResult(result);
		break;
	case 5:
		std::cout << "\nYou're a retard.";
		break;
	}

	return 0;
}
