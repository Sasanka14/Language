// Question 7 : Demonstrate multiple inheritance in C++.
#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() {
        cout << "This bird can fly." << endl;
    }
};

// Derived class inheriting from both Animal and Bird
class Eagle : public Animal, public Bird {
public:
    void display() {
        eat(); // Call function from Animal class
        fly(); // Call function from Bird class
    }
};

int main() {
    Eagle myEagle; // Create an object of the derived class

    myEagle.display(); // Call the function from the derived class

    return 0;
}