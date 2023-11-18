#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of Data1 is " << data1 << " and Data2 is " << data2 << endl;
};

int main()
{
    Simple s(47);
    // Simple s(47, 89);
    s.printData();
    return 0;
}