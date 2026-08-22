
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> number; // Read the number from the user

    // Conditional statement (if-else) to check the number
    if (number >= 0) {
        // Code to run if the condition (number >= 0) is true
        cout << "You entered a positive integer (or zero): " << number << std::endl;
    } else {
        // Code to run if the condition is false (i.e., number < 0)
        cout << "You entered a negative integer: " << number << std::endl;
    }

    return 0;
}
