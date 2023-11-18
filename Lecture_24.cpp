#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << endl;
        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The Id of this Employee is: " << id << " And this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout << id;   ---> throws an Error.
        cout << "The value of Count is: " << count << endl;
    }
};

int Employee ::count; // Default Value is 0.
int main()
{
    Employee harry, vishal, hunny;
    // Count is the Static Member of Class Employee
    // harry.id = 1;         ---> can not do as 'id' and 'count' are Private
    // harry.count = 1;      ---> can not do as 'id' and 'count' are Private
    harry.setData();
    harry.getData();
    Employee::getCount();

    vishal.setData();
    vishal.getData();
    Employee::getCount();

    hunny.setData();
    hunny.getData();
    Employee::getCount();

    return 0;
}