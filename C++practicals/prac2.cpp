#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Sequence: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}