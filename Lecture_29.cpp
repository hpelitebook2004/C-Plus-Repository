#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    /* Constructor is a special member function with same name as of the class.
       It is used to initialized the objects of its class.
       It is automatically invoked(means call) whenever is an object is created.
    */
    Complex(void); // Construtor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // -----> This is a Default Constructor as it accepts no parameters.
{
    a = 0;
    b = 0;
}
int main()
{
    Complex c1, c2, c3;
    cout << "Hello Viewer" << endl;
    cout << "Welcome to the Code with Harry Lecture." << endl;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/*

Characterstics of Constructor :-
1. It should be declared in the public section of  the Class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return values .
4. It can have default Arguments.
5. We cannot refer to their address.

*/