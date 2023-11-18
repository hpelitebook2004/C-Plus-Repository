#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 123;
        cout << "Enter ID of Employee:" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The Id of this Employee: " << id << endl;
    }
};

int main()
{
    //     Employee harry, monika, vishal, rahul;
    //     harry.setId();
    //     harry.getId();
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[1].setId();
        fb[1].getId();
    }

    return 0;
}