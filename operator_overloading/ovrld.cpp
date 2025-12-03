#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // -------- Overload + (Complex + Complex) --------
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // -------- Overload - (Complex - Complex) --------
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // -------- Overload *= (Complex *= Complex) --------
    Complex& operator*=(const Complex& other) {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        real = r;
        imag = i;
        return *this;  // return updated object
    }

    // -------- Overload <= (compare by magnitude) --------
    bool operator<=(const Complex& other) const {
        double mag1 = real * real + imag * imag;
        double mag2 = other.real * other.real + other.imag * other.imag;
        return mag1 <= mag2;
    }

    // -------- Utility: print Complex --------
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);   // 3 + 4i
    Complex c2(1, 2);   // 1 + 2i

    Complex sum = c1 + c2;   // calls operator+
    Complex diff = c1 - c2;  // calls operator-
    c1 *= c2;                // calls operator*=
    
    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();
    cout << "After *= : "; c1.display();

    if (c1 <= c2)
        cout << "c1 has smaller/equal magnitude than c2" << endl;
    else
        cout << "c1 has larger magnitude than c2" << endl;

    return 0;
}
