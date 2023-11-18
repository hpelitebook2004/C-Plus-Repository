#include <iostream>

using namespace std;


// int sum(int a, int b){
//     int c= a + b;
//     return c;
// }

void swap(int a, int b){        //  temp    a       b
    int temp = a;               //  4       4       5
    a = b;                      //  4       5       5   
    b = temp;                   //  4       5       4
}

// ********************************* Call by Reference using Pointers *********************************  
void swapPointer(int* a, int* b){        //  temp    a       b
    int temp = *a;                       //  4       4       5
    *a = *b;                             //  4       5       5   
    *b = temp;                           //  4       5       4
}

// ********************************* Call by Reference using C++ reference Variables *********************************  
void swapReferenceVar(int &a, int &b){        //  temp    a       b
    int temp = a;                             //  4       4       5
    a = b;                                    //  4       5       5   
    b = temp;                                 //  4       5       4
}

// *********************************  Call by Return value *********************************  
// int & swapReferenceVar(int &a, int &b){        //  temp    a       b
//     int temp = a;                             //  4       4       5
//     a = b;                                    //  4       5       5   
//     b = temp;                                 //  4       5       4
//     return a;
// }

int main()
{
    int x= 4, y= 5;
    // cout<<"The Sum of A & B is: "<<sum(4,5)<<endl;
    cout<<"The Value of x is: "<<x<<" & the value of y is: "<<y<<endl;
    // swap(x, y);                         // This will not swap A & B
    // swapPointer(&x, &y);                // This will swap A & B using pointer reference
    swapReferenceVar(x, y);                // This will swap A & B using reference variables
    // swapReferenceVar(x, y) = 456;       // This will swap A & B using reference variables

    cout<<"The Value of x is: "<<x<<" & the value of y is: "<<y<<endl;
    return 0;
}