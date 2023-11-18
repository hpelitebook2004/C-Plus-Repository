#include <iostream>

using namespace std;

int main()
{
    // What is a Pointer? ------> datatype which holds the address of other datatypes
    int a = 17;
    int *b;
    b = &a;
    // & -----> (Address of) operator
    cout << "The Address of A is:" << b << endl;
    cout << "The Address of A is:" << &a << endl;

    // * -----> (Value of) Dereference operator
    cout << "The Value of address b is:" << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The Address of B is :" << &b << endl;
    cout << "The Address of B is :" << c << endl;
    cout << "The Value at address C is :" << *c << endl;
    cout << "The Value at address value_at (value_at (C)) is :" << **c << endl;

    return 0;
}