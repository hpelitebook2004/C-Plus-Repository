#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    } // This Constructor is also important because without having this their will be an Error.

    Number(int num)
    {
        a = num;
    }

    // When no Copy Constructor is not found then, Complier Supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor Called(invoked) !!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is:" << a << endl;
    }
};

int main()
{
    Number x, y, z(85), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y.

    Number z1(z); // Copy Constructor invoked (Called).
    z1.display();

    z2 = z; // Copy Constructor is not invoked.
    z2.display();

    Number z3 = z; // Copy Constructor invoked (Called).
    z3.display();

    return 0;
}