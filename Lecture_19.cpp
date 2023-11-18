#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout<<"Using functions with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using functions with 3 arguments"<<endl;
    return a+b+c;
}

// Calculate the Volume of Cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// Calculate the Volume of Cube
int volume(int a){
    return(a * a * a);
}

// Calculate the Volume of Rectangular box
int volume(int l, int b, int h){
    return(l*b*h);
}
int main()
{
    cout<<"The Sum of 3 and 8 is: "<<sum(3,8)<<endl;
    cout<<"The Sum of 3,8 & 10 is: "<<sum(3,8,10)<<endl;
    cout<<"The Volume of Rectangle of 3,8 & 10 is: "<<volume(3,8,10)<<endl;
    cout<<"The Volume of Cuboid of 3 is: "<<volume(3)<<endl;
    cout<<"The Volume of Cylinder of radius 8 and height 10 is: "<<volume(8,10)<<endl;

    return 0;
}