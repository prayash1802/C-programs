#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, digits = 0, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    
    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate the sum of digits raised to the power of the number of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += round(pow(remainder, digits));
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
