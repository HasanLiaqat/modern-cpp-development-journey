#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
        cout << "Animal Constructor Called" << endl;
    }

    void eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {
        cout << "Dog Constructor Called" << endl;
    }

    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    Dog d1("Buddy");

    d1.eat();   // inherited function
    d1.bark();  // own function

    return 0;
}
