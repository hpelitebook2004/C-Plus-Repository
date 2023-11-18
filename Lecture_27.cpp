#include <iostream>

using namespace std;

//  Forward Declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    // Individually declaring the functions as friends

    friend int calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int calculator ::sumCompComplex(Complex o1, Complex o2);

    // Aliter :Declaring the entire calculator class as friend

    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The Sum of Real part of o1 and o2 is: " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The Sum of Complex part of o1 and o2 is: " << resc << endl;
    return 0;
}