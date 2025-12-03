#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Operator +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Operator -
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Operator ==
    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    // Operator <= (compare by magnitude)
    bool operator<=(const Complex& other) const {
        double mag1 = real*real + imag*imag;
        double mag2 = other.real*other.real + other.imag*other.imag;
        return mag1 <= mag2;
    }

    // Operator >= (compare by magnitude)
    bool operator>=(const Complex& other) const {
        double mag1 = real*real + imag*imag;
        double mag2 = other.real*other.real + other.imag*other.imag;
        return mag1 >= mag2;
    }

    // Display
    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i";
    }
};

int main() {
    Complex c1(3, 4);   // magnitude = 5
    Complex c2(1, 2);   // magnitude = sqrt(5)

    cout << "c1 = "; c1.display(); cout << endl;
    cout << "c2 = "; c2.display(); cout << endl;

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "\nc1 + c2 = "; sum.display(); cout << endl;
    cout << "c1 - c2 = "; diff.display(); cout << endl;

    cout << "\nEquality check: " << (c1 == c2 ? "Equal" : "Not Equal") << endl;
    cout << "c1 <= c2 ? " << (c1 <= c2 ? "Yes" : "No") << endl;
    cout << "c1 >= c2 ? " << (c1 >= c2 ? "Yes" : "No") << endl;

    return 0;
}
