#include <iostream>

using namespace std;

int main()
{

    // ************ Selection control Statements :- If, Else-if & Else Laddar **************

    // int age;
    // cout<<"This the Lecture of C++ Conditional Statements \n"<<endl;
    // cout<<"Enter YOur Age :"<<endl;
    // cin>>age;

    // if((age<18) && (age>0))
    // {
    //     cout<<"Your age is less than 18 \nThen you can't come to our party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"Heyy ,Your age is 18 \nThen you wanted to take a Party pass for enjoying a party"<<endl;
    // }
    // else if(age<=0)
    // {
    //     cout<<"You Can not be born yet."<<endl;
    // }
    // else
    // {
    //     cout<<"Welcome To the party "<<endl;
    // }

    // ************ Selection control Statements :- Switch Control Statements ****************

    int num;
    cout << "Enter the number b/w 1 to 7:" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Please Enter Correct number" << endl;
        break;
    }
    return 0;
}