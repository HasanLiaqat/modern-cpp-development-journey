#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Setter function
    void setMarks(float m) {
        marks = m;
    }

    // Getter function
    float getMarks() {
        return marks;
    }

    // Display function
    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    // Creating object
    Student s1("Alice", 102, 91.5);

    s1.display();

    cout << "Updated Marks: " << endl;
    s1.setMarks(95.0);
    cout << s1.getMarks() << endl;

    return 0;
}
