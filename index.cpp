#include <iostream>

int main() {
    int num1, num2, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1; // Reads input and stores it in num1

    std::cout << "Enter the second number: ";
    std::cin >> num2; // Reads input and stores it in num2

    sum = num1 + num2;

    std::cout << "The sum of the numbers:" << sum << std::endl;
    std::cout << "Calculation complete!" << std::endl;
    return 0;
}
