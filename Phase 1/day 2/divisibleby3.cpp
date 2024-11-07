#include <iostream>
using namespace std;

// Function to check if a number is divisible by 3
bool isDivisibleByThree(int number) {
    if (number % 3 == 0) {  // Checking whether the number is divisible by 3
        return true;
    }
    return false;
}

// Function to test isDivisibleByThree by printing the raw result
void isDivisibleByThreeTest() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    bool result = isDivisibleByThree(number);
    cout << result << endl;
}

// Function to test isDivisibleByThree with a descriptive message
void isDivisibleByThreeTesttwo() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    bool result = isDivisibleByThree(number);
    if (result == true) {
        cout << "The number is divisible by 3" << endl;
    } else {
        cout << "The number is not divisible by 3" << endl;
    }
}

int main() {
    // Call both test functions
    isDivisibleByThreeTest();
    isDivisibleByThreeTesttwo();
    return 0;
}
