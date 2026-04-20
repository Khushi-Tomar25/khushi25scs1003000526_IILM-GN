#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter a positive integer: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    cout << "Sum of digits of " << n << " is: " << sum << endl;
    return 0;
}