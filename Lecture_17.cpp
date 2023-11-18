#include <iostream>

using namespace std;

inline int product(int a, int b){
    return a*b;
}

// int product(int a, int b){
//     // ******************* Static Variables ******************* 
//     // Don't recommended to use the below lines with inline functions
//     static int c = 0;       // This line execute only once 
//     c= c+1;                 // Next time this function is run, the value C will be retained 
//     return a*b+c;
// }

float moneyReceived(int currentMoney, float factor = 1.05)
{
    return currentMoney * factor;
}

// int strlen(const char p='e'){
//     cout<<"The string length of p is:"<<strlen(p)<<endl;
// }


int main()
{
    // int a, b;
    // cout<<"Enter the value of A & B is :"<<endl;
    // cin>>a>>b;
    // cout<<"The product of two values is :"<<product(a,b)<<endl;
    // cout<<"The product of two values is :"<<product(a,b)<<endl;
    // cout<<"The product of two values is :"<<product(a,b)<<endl;
    int money= 100000;
    cout<<"\nIf you have "<<money <<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year. "<<endl;
    cout<<"\nFor VIP: If you have "<<money <<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year. "<<endl;
    return 0;
}