// Question 6: Implement inheritance (Single Inheritance) in C++.
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};  

int main() {
    Dog myDog; // Create an object of the derived class

    myDog.eat(); // Call the inherited function from the base class
    myDog.bark(); // Call the function from the derived class

    return 0;
}