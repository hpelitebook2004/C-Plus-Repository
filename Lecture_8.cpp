#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // int a = 34;
    // cout << "The value of A is: " << a << endl;
    // a = 456;
    // cout << "The new value of A is: " << a << endl;
    // char c = 'd';
    // cout << "The value of C is: " << c << endl;
    // c = 'y';
    // cout << "The new value of C is: " << c << endl;

    // ********************Constants in C++ ****************************

    // const int x = 34;
    // cout << "the value of X is :" << x << endl;
    // x = 36;
    // cout << "The value of X is :" << x << endl;
    // YOu will get an error because your variable is constant.

    // ******************* Manipulators in C++ *************************

    // int p = 3, q = 90, r = 609;
    // cout << "The value of P is:" << p << endl;
    // cout << "The value of q is:" << q << endl;
    // cout << "The value of r is:" << r << endl;

    // cout << "The value of with setw P is:" << setw(3) << p << endl;
    // cout << "The value of with setw q is:" << setw(3) << q << endl;
    // cout << "The value of with setw r is:" << setw(3) << r << endl;

    // ********************** Operator Precedence **************************

    int a = 3, b = 5;
    int c = (a * b) + 45;
    // int c = ((((a * b) + a) + 34) - 78);
    cout << "The Value of C is :" << c << endl;
    return 0;
}