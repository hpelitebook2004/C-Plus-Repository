#include <iostream>

using namespace std;

typedef struct employee
{
    /* data */
    int emp_id;
    char favChar;
    float salary;
} emp;


union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal{breakfast,lunch,dinner};
    Meal m1= dinner;
    cout<<(m1==1)<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // union money m1;
    // m1.rice= 123;
    // m1.car= 'v';
    // cout<<"The value of Rice is: "<<m1.car<<endl;

    emp vishal;
    struct employee harsh;
    struct employee kunal;
    vishal.emp_id=1;
    vishal.favChar='A';
    vishal.salary= 150000000;
    cout<<"Employee Id is: "<<vishal.emp_id<<endl;
    cout<<"Employee character is: "<<vishal.favChar<<endl;
    cout<<"Employee Salary is: "<<vishal.salary<<endl;
    return 0;
}