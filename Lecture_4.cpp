#include <iostream>
using namespace std;
int glo = 6;

void sum()
{
    cout << "The value of global variable is :" << glo << endl;
}

int main()

{
    // int a=12;
    // int b=32;
    int a = 12, b = 32;
    float pi = 3.147;
    char c = 'h';
    double d = 0.321456987;
    // Here, This Boolean function which is used for the purpose of 0 and 1 .
    bool e = true;
    sum();
    int glo = 8;
    // Now , we are update the value of "glo" variable
    glo = 17;
    // cout<<"The value of A:"<<a<<endl;
    // cout<<"The value of B:"<<b<<endl;
    // cout<<"The value of PI:"<<pi<<endl;
    // cout<<"The value of C is :"<<c<<endl;
    // cout<<"The value of d is :"<<d<<endl;
    cout << "The Value of local variable is :" << glo << endl;
    cout << "The value of Boolean variable is :" << e << endl;
    return 0;
}