#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Construtor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // -----> This is a parameterized Constructor as it takes 2 parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call

    Complex a(4, 6);
    a.printNumber();

    // Explicit Call

    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}