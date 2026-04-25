#include <iostream>
using namespace std;

class Box {
public:
    double length; // Data Member
    void display() { cout << "Length: " << length << endl; } // Member Function
};

int main() {
    Box myBox;
    myBox.length = 10.5; // Accessing member
    myBox.display();
    return 0;
}