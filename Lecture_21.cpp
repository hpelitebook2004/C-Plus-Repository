#include <iostream>

using namespace std;


class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData()
            {
            cout<<"The value of A is: "<< a<<endl;
            cout<<"The value of B is: "<< b<<endl;
            cout<<"The value of C is: "<< c<<endl;
            cout<<"The value of D is: "<< d<<endl;
            cout<<"The value of E is: "<< e<<endl;
            }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main()
{
    Employee vishal;
    // vishal.a = 12;  //-------> This will throw error as "A" is private.
    // vishal.b = 13;  //-------> This will throw error as "B" is private.
    // vishal.c = 14;  //-------> This will throw error as "C" is private. 
    vishal.d = 34;
    vishal.e = 89;
    vishal.setData(1,2,7);
    vishal.getData();
    return 0;
}