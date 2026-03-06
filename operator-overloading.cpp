#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Operator overloading for +
    Complex operator + (Complex c) {
        int r = real + c.real;
        int i = imag + c.imag;
        return Complex(r, i);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}
