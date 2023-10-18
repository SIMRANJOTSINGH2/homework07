/// 
/// Simranjot Singh , 13 october 2023
/// 

#include <iostream>
using namespace std;

int main() {
    int count = 1;
    int largest = 0;

    cout << "Please Enter 10 Numbers to find out the largest number among of all of them.\n";
    while (count <= 10) {
        int number;
        cout << "Enter a integer #" << count << ": ";
        cin >> number;
        while (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "You've entered an invalid number, or a character. Please restart the process from the beginning.\n";
            return 0;
        }
        if (number > largest) {
            largest = number;
        }
        count++;
    }
    cout << "The largest Number is: " << largest << endl;
}