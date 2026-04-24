#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // Allocate memory
    *ptr = 100;
    
    cout << "Value at dynamic pointer: " << *ptr << endl;
    
    delete ptr; // Free memory
    cout << "Memory successfully deallocated." << endl;
    return 0;
}