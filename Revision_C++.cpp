
// #include <iostream>

// using namespace std;

// int main()
// {
//     cout<<"Welcome to the Revision with Vishal";
//     return 0;
// }



// #include <iostream>

// using namespace std;

// int global=34;
// void sum()
// {
//     cout<<global<<endl;
// }

// int main()
// {
//     int a=23;
//     float b=34.576543;
//     double c=0.46545123156784;
//     char d='r';
//     bool e= true;
//     // int global=78;
//     cout<<"The value of a:"<<a<<endl;
//     cout<<"The value of B:"<<b<<endl;
//     cout<<"The value of C:"<<c<<endl;
//     cout<<"The value of D:"<<d<<endl;
//     cout<<"The value of E:"<<e<<endl;
//     cout<<"The value of Global:"<<global<<endl;
// }



// #include <iostream>

// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter the values of A:"<<endl;
//     cin>>a;
//     cout<<"Enter the Values of B:"<<endl;
//     cin>>b;
//     cout<<"the sum of A & B is:"<<a+b;
// }




// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;
//     cout<<"Enter the values of 1 to 12:"<<endl;
//     cin>> a;
//     switch (a)
//     {
//         case 1:
//         cout<<"January"<<endl;
//         break;
//         case 2:
//         cout<<"Feburary"<<endl;
//         break;
//         case 3:
//         cout<<"March"<<endl;
//         break;
//         case 4:
//         cout<<"April"<<endl;
//         break;
//         case 5:
//         cout<<"May"<<endl;
//         break;
//         case 6:
//         cout<<"June"<<endl;
//         break;
//         case 7:
//         cout<<"July"<<endl;
//         break;
//         case 8:
//         cout<<"August"<<endl;
//         break;
//         case 9:
//         cout<<"September"<<endl;
//         break;
//         case 10:
//         cout<<"October"<<endl;
//         break;
//         case 11:
//         cout<<"November"<<endl;
//         break;
//         case 12:
//         cout<<"December"<<endl;
//         break;

//         Default:
//         cout<<"Error Occur";
//         break;
//     }
//     cout<<"Thank for using this."<<endl;
// }



// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;
//     cout<<"Enter the values of A:"<<endl;
//     cin>>a;

//     if(a>0)
//     {
//         cout<<"A is positive";
//     }
//     else if(a<0)
//     {
//         cout<<"A is negative";
//     }
//     else
//     {
//         cout<<"A is Zero";
//     }
// }

// *************************************** Print table with the help of 'While' loop ***********************************

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     cout<<"Enter the Value of I is:";
//     cin>>i;
//     {
//         int j=1;
//         while(j<=10)
//         {
//         cout<<i<<"*"<<j<<"="<<i*j<<endl;
//         j++;
//         }
//     }
// }


// *************************************** Print table with the help of 'For' loop ***********************************

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     cout<<"Enter the Value of I is:";
//     cin>>i;
//     {
//         for(int j=1;j<=10;j++)
//         {
//         cout<<i<<"*"<<j<<"="<<i*j<<endl;
//         }
//     }
// }


// *************************************** Print table with the help of 'For' loop ***********************************

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     cout<<"Enter the Value of I is:";
//     cin>>i;
//         int j=1;
//         do
//         {
//         cout<<i<<"*"<<j<<"="<<i*j<<endl;
//         j++;
//         }
//         while(j<=10);
// }



// ********************************* Define Variables Outside the Main() function  ********************************

// #include <iostream>

// using namespace std;


// int divide(int a, int b)
// {
//     return a/b;
// }


// int main()
// {
//     int a, b;
//     cout<<"Enter the values of A :"<<endl;
//     cin>>a;
//     cout<<"Enter the values of B :"<<endl;
//     cin>>b;
//     cout<<"The Division of above two values is :"<<a/b<<endl;
//     return 0;
// }


// ******************************** Using Class functions (Lecture = 21) **************************

#include <iostream>

using namespace std;

class Employee;
{
    private:
        int emp_salary, emp_bonus, emp_leave;
    public:
        int emp_id, char emp_name;
        void setData(int emp_salary1, int emp_bonus1, int emp_leave1);
        void getData()
        {
            cout<<"Salary of Employee is : "<<emp_sal<< endl;
            cout<<"Bonus of Employee is : "<<emp_bonus<< endl;
            cout<<"Leave taken by Employee is : "<<emp_leave<< endl;
            cout<<"Employee id : "<<emp_id<< endl;
            cout<<"Employee name: "<<emp_name<< endl;
        }
};

void Employee::setData(int emp_salary1, int emp_bonus1, int emp_leave1)
{
    emp_salary = emp_salary1;
    emp_bonus = emp_bonus1;
    emp_leave = emp_leave1;
}


int main()
{
    Employee vishal;
    vishal.emp_id = '1023';
    vishal.emp_name = 'v';
    vishal.setData(45000,1500,2);
    vishal.getData();
    return 0;
}