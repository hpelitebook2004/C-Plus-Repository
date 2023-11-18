// There are two Header files is:
// 1. System Header files: It is comes with Compiler
#include <iostream>
// 2. User Header files: It is written by the Programmer
#include "this.h" /* -->This will Produce an error when this.h file is not present in the 
current directory.*/

using namespace std;
int main()
{
    int a = 25, b = 5;
    cout << "Operators in C++" << endl;
    cout << "Following are the types of Operators in C++" << endl;
    cout << "The Values of A & B is :" << a << '\t' << b << endl;
    // Arithmetic operator
    cout << "The Value of a+b is:" << a + b << endl;
    cout << "The Value of a-b is:" << a - b << endl;
    cout << "The Value of a*b is:" << a * b << endl;
    cout << "The Value of a/b is:" << a / b << endl;
    cout << "The Value of a%b is:" << a % b << endl;
    cout << "The Value of a++ is:" << a++ << endl;
    cout << "The Value of a-- is:" << a-- << endl;
    cout << "The Value of ++a is:" << ++a << endl;
    cout << "The Value of --a is:" << --a << endl;
    cout << endl;

    // Assignment Operators --> used to assign values of variables
    // int a=4,b=34;
    // char d='e';

    // Comparison Operators
    cout << "Following are the Comparison Operators in C++" << endl;
    cout << "The values of a==b is " << (a == b) << endl;
    cout << "The values of a!=b is " << (a != b) << endl;
    cout << "The values of a>=b is " << (a >= b) << endl;
    cout << "The values of a<=b is " << (a <= b) << endl;
    cout << "The values of a>b is " << (a > b) << endl;
    cout << "The values of a<b is " << (a < b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Following are the Logical Operators in C++" << endl;
    cout << "The values of Logical and Operator ((a==b) & (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The values of Logical or Operator ((a==b) & (a<b)) is: " << ((a == b) || (a > b)) << endl;
    cout << "The values of Logical not Operator (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}