#include <iostream>
using namespace std;

class Student {

private:
    int marks;
    static int studentCount;

public:

    Student(int m) {
        marks = m;
        studentCount++;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }

    static void showStudentCount() {
        cout << "Total Students Created: " << studentCount << endl;
    }

    friend void compareMarks(Student s1, Student s2);
};

int Student::studentCount = 0;

void compareMarks(Student s1, Student s2) {

    if (s1.marks > s2.marks)
        cout << "Student 1 has higher marks" << endl;

    else if (s2.marks > s1.marks)
        cout << "Student 2 has higher marks" << endl;

    else
        cout << "Both students have equal marks" << endl;
}

int main() {

    Student s1(85);
    Student s2(92);

    s1.display();
    s2.display();

    Student::showStudentCount();

    compareMarks(s1, s2);

    return 0;
}
