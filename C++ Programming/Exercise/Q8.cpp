// Question 8 : Demonstrate multilevel inheritance
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
class Mammal : public Animal {
public:
    void walk() {  
        cout << "This mammal can walk." << endl;
    }
}; 

// Derived class inheriting from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog myDog; // Create an object of the derived class

    myDog.eat(); // Call function from Animal class
    myDog.walk(); // Call function from Mammal class
    myDog.bark(); // Call function from Dog class

    return 0;
}