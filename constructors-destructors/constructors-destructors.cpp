#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy Constructor Called" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor Called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1;                      // Default constructor
    Person p2("Alice", 25);         // Parameterized constructor
    Person p3 = p2;                 // Copy constructor

    p2.display();
    p3.display();

    return 0;
}
