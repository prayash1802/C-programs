#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter an integer: ";
    cin >> n;
    
    // Convert negative numbers to positive for calculation
    if (n < 0) n = -n;

    while(n > 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
