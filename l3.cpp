#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound\n";
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks 🐶\n";
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows 🐱\n";
    }
};

int main() {
    Animal* a1 = new Dog();  // base class pointer to derived object
    Animal* a2 = new Cat();

    a1->makeSound();  // Calls Dog's makeSound
    a2->makeSound();  // Calls Cat's makeSound

    delete a1;
    delete a2;

    return 0;
}
