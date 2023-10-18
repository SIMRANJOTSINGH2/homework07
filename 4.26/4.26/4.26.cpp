///
/// Simranjot Singh, 14 October 2023
/// 

#include <iostream>
#include <iomanip>

int main() {
    int width;

    std::cout << "In this Project, I will create a box with Asterisks." << std::endl;
    std::cout << "Please provide a number to determine the width of the Square. Max limit is 20." << std::endl;
    std::cout << "Input: ";
    std::cin >> width;

    if (width > 20) {
        width = 20;
    }

    std::cout << "\nOutput:\n";
    std::cout << std::setfill('*') << std::setw(width) << " " << std::endl;

    std::cout << std::setfill(' ');
    std::cout << "*" << std::setw(width) << "*" << std::endl;
    std::cout << "*" << std::setw(width) << "*" << std::endl;
    std::cout << "*" << std::setw(width - 1) << "*" << std::endl;

    std::cout << std::setfill('*') << std::setw(width) << "\n" << std::endl;

    return 0;
}