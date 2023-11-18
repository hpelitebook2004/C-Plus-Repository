    // ************************************ Theory of C++ ************************************
    
    
    // OOPS --->   Classes & Objects

    // C++ ---> initially called "C with Classes by stroustroup"
    // Class ---> Extension of structures (in C)
    // Structures of Limitation :-
    //               ----> Members are Public.
    //               ----> No Methods.

    // Classes ---> structures + more
    // Classes ---> can have methods and properties
    // Classes ---> can have few members are private & few as public
    // Structures in C++ are typedefed
    // You can declare objects along with the class declaration 
        /* class employee{
            // Class defination 
        } harry, rohan, vishal; 
        */
    // harry.salary = 8 makes no sense if salary is private.


#include <iostream>
#include <string>

using namespace std;


    // ***************************** Nesting of Member functions **************************************


class binary
{
    // private:
        string s;

    public :
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void)
{
    cout<<"Enter a Binary Number:"<<endl;
    cin>> s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect Binary Format "<<endl;
            exit(0);
        }
    }
    
}

void binary :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) ='0';
        }
    }
}

void binary :: display(void)
{
    cout<<"Display your Binary Number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}