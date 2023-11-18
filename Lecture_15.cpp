#include <iostream>

using namespace std;

// ******************************** Using one or more Function in C++ ***************************************

// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }
// int main()
// {
//     int num1, num2;
//     cout<<"Enter the value of num1 is :"<<endl;
//     cin>>num1;
//     cout<<"Enter the value of NUm2 is :"<<endl;
//     cin>>num2;
//     cout<<"The value of sum is :"<<sum(num1, num2);
//     return 0;
// }


// *************************************** Function Prototypes in C++ *************************************
// type function-name (arguments);

// int sum(int a, int b); // -----> Acceptable
// int sum(int a,b); // -----> Unacceptable
int sum(int, int); // -----> Acceptable
// void g(void); // ------> Acceptable
void g(void); // -------> Acceptable

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1 is :"<<endl;
    cin>>num1;
    cout<<"Enter the value of NUm2 is :"<<endl;
    cin>>num2;
    // num1 and num2 are the actual parameters
    cout<<"The value of sum is :"<<sum(num1, num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameter(a & b) will be the taking values from actual parameters num1 & num2 
    int c=a+b;
    return c;
}

void g()
{
    cout<< "Hello, Good Morning" <<endl;
}
