// Question 1 : Demonstrate dynamic memory allocationin using new and delete in c++.
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // Dynamically allocate memory for an integer
    *ptr = 42; // Assign a value to the allocated memory

    cout << "Value: " << *ptr << endl; // Output the value stored in the allocated memory

    delete ptr; // Deallocate the memory
    ptr = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0;
}
