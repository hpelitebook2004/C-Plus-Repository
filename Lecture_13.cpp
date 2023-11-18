#include <iostream>

using namespace std;

int main()
{

    // Array Example

    int marks[] = {23, 78, 89, 90};
    int mathsmarks[4];
    mathsmarks[0] = 12;
    mathsmarks[1] = 34;
    mathsmarks[2] = 67;
    mathsmarks[3] = 80;

    cout << "These marks of maths are :" << endl;
    cout << mathsmarks[0] << endl;
    cout << mathsmarks[1] << endl;
    cout << mathsmarks[2] << endl;
    cout << mathsmarks[3] << endl;

    cout << "These Marks are :" << endl;
    // cout<<marks[0]<<endl;
    // // YOu can change the value of the array
    // marks[2]=99;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // ******************************* With For Loop *****************************
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks"<<i<<" is :"<<marks[i]<<endl;
    // }

    // Quick Quiz :----> do the same using While and Do-while Loop ??
    // ***************************** With While Loop ******************************
    int i = 0;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is :" << marks[i] << endl;
        i++;
    }

    // ***************************************** Pointers and Arrays ********************************* --------->
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout<<"The value of *p is :"<< *p<<endl;
    // cout<<"The value of *(p+1) is :"<< *(p+1)<<endl;
    // cout<<"The value of *(p+2 is :"<< *(p+2)<<endl;
    // cout<<"The value of *(p+3) is :"<< *(p+3)<<endl;

    return 0;
}