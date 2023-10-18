///
///Simranjot Singh , 11 oct 2023
/// 

#include <iostream>
using namespace std;

int main() {
    int power = 0;
    int answer = 1;

    while (answer > 0) {
        cout << "2^" << power << " = " << answer << endl;
        answer = answer * 2; // Doubles the previous result
        power++;
        if (power > 10) {
            return 0; // This line will never reached in an infinite loop
        }
    }
}