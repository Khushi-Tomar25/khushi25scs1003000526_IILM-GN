#include <iostream>
using namespace std;

class Example {
    int x;
public:
    Example() { x = 0; cout << "Default Constructor\n"; }
    Example(int val) { x = val; cout << "Parameterized Constructor\n"; }
    Example(const Example &obj) { x = obj.x; cout << "Copy Constructor\n"; }
    void show() { cout << "Value: " << x << endl; }
};

int main() {
    Example e1;          // Default
    Example e2(50);      // Parameterized
    Example e3 = e2;     // Copy
    return 0;
}