#include <iostream>

using namespace std;

int c = 345;
// This is called Global variable in C++ programming.
// In C++ , Local variable is greater than the Global Variable.

int main()
{

    // ******************      Build in Datatypes *******************

    // int a,b,c;
    // cout<<"Enter the value of A:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of B:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the Sum is :"<<c<<endl;
    // // :: --> This is known as Scope Resolution operator. This operator is used for printing the Global variable in Local Variable Area.
    // cout<<"The Global Variable is:"<<::c;

    // ******************     Float, Double, & Long Double Literals     *******************

    // float d = 39.4f;
    // /* By Default C++ compiler , if we doesn't put 'f' behind the value of float function then compiler read it
    // as a double value that why we put 'f' behind the float variable then it shows that it is 'float' function */

    // long double e = 39.4l;
    // /* By Default C++ compiler , if we doesn't put 'l' behind the value of long double function then compiler read it
    // as a simple double value that why we put 'l' behind the float variable then it shows that it is 'long double' function */

    // cout << "The value of 39.4 is: " << sizeof(39.4) << endl;
    // cout << "The value of 39.4f is: " << sizeof(39.4f) << endl;
    // cout << "The value of 39.4F is: " << sizeof(39.4F) << endl;
    // cout << "The value of 39.4l is: " << sizeof(39.4l) << endl;
    // cout << "The value of 39.4L is: " << sizeof(39.4L) << endl;

    // cout << "The value of float is:" << d << endl;
    // cout << "The value of double is:" << e << endl;

    // ******************** Reference Variables ***************************

    // // Rohan das ----->Monty -----> Rohu ----->Dangerous Coder
    // float x = 432;
    // float &y = x;

    // cout << x << endl;
    // cout << y << endl;

    // ******************** Typecasting Variables ***************************

    int p = 23.4;
    float q = 36.787;
    cout << "The value of P is " << (float)p << endl;
    cout << "The value of P is " << float(p) << endl;
    // Above Both are correct

    cout << "The value of R is " << (int)q << endl;
    cout << "The value of R is " << int(q) << endl;
    // Above Both are correct

    int r = int(q);
    cout << "The Expression is :" << p + q << endl;
    cout << "The Expression is :" << p + int(q) << endl;
    cout << "The Expression is :" << p + (int)q << endl;

    return 0;
}