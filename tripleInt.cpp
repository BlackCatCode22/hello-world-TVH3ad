// tV 8/25/2024
//tripleint.cpp

#include <iostream>

int main() {
    int number;

    // Prompt the user for an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Triple the number
    int tripled = number * 3;

    // Output the result
    std::cout << "The tripled value is: " << tripled << std::endl;

    return 0;
}
