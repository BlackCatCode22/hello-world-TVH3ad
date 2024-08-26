// tV 8/25/2024
// usernameandgreeting.cpp

#include <iostream>
#include <string>

int main() {
    std::string name;

    // Prompt the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Use getline to allow spaces in the name

    // Create a friendly greeting
    std::cout << "Hello, " << name << "! Welcome!" << std::endl;

    return 0;
}
