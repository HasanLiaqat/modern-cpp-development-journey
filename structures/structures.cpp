#include<iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() 
{
    Student s1;

    s1.name = "Alpha";
    s1.rollNumber = 111;
    s1.marks = 89.5;

    s1.display();

    return 0;
}
