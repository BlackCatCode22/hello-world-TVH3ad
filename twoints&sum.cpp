// tV 8/25/2024
// twoints&sum.cpp

#include <iostream>

int main() {
    int num1, num2;

    // Prompt the user for the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // Prompt the user for the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Calculate the sum of the two integers
    int sum = num1 + num2;

    // Output the result
    std::cout << "The sum of the two integers is: " << sum << std::endl;

    return 0;
}
