#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the value of I:";
    cin>>i;
    int a=1;
    while(a<=10)
    {
        int c=a*i;
        cout<<i<<"*"<<a<<"="<<c<<endl;
        a=a+1;
    }
    
}