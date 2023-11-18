#include <iostream>

using namespace std;

int main()
{
    /*Loops in C++
    There are three loops in C++ :
    1. For Loop
    2. While Loop
    3. Do-While Loop
    */

    //******************************** For loop in C++ ************************************//
    //***************** Syntax of For loop *****************//
    // for(intialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // ********* Example of Finite 'For' Loop ************* //
    // for (int i=0; i<=5; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // ********* Example of Infinite 'For' Loop ************* //
    // for (int i=0; 4<=5; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    //******************************** While loop in C++ ************************************//
    //*****************Syntax of 'While' loop *****************//
    // intialization
    // while(condition)
    // {
    //     C++ Statements;
    //     Updation;
    // }

    // // ********* Example of Finite 'While' Loop ************* //
    // int i=1;
    // while(i<=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // ********* Example of Infinite 'While' Loop ************* //
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //******************************** Do-While loop in C++ ************************************//
    //*****************Syntax of 'Do-While' loop *****************//
    // intialization
    // do
    // {
    //     C++ Statements;
    //     updation;
    // }while(condition);

    // ********* Example of Finite 'Do-While' Loop ************* //
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(i<=10);

    //********* Example of Infinite 'Do-While' Loop ************* //
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(true);

    //********* Example of Atleast one time run 'Do-While' Loop ************* //
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (false);

    return 0;
}
