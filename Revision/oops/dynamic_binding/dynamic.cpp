#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void sound() override { // Override base class function
        cout << "Dog barks" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void sound() override { // Override base class function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal; // Base class pointer

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animal = &dog;
    animal->sound(); // Output: Dog barks

    // Pointing to Cat object
    animal = &cat;
    animal->sound(); // Output: Cat meows

    return 0;
}
