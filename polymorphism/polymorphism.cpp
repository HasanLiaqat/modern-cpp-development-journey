#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {   // Virtual function
        cout << "Drawing a shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* s1;
    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();   // Calls Circle's draw()

    s1 = &r;
    s1->draw();   // Calls Rectangle's draw()

    return 0;
}
