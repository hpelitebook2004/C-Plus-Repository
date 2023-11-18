#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The Point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}

// /*
// Question =>
//             Create a function (Hint : Make it a friend function) which takes 2 point objects and
//             compute the distance between those two Points ?
// */

// /*
// Use these Examples to check your Code :-

// Distance between (1, 1) and (1, 1) is 0.
// Distance between (0, 1) and (0, 6) is 5.
// Distance between (1, 0) and (70, 0) is 69.
// */

// // Answer =

// #include <iostream>
// #include <cmath>
// using namespace std;
// class point
// {
//     int x, y;
//     friend void distance(point o1, point o2);

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     void display1()
//     {
//         cout << "(" << x << "," << y << ")" << endl;
//         cout << "The First given value is (" << x << "," << y << ") " << endl;
//     }

//     void display2()
//     {
//         cout << "(" << x << "," << y << ")" << endl;
//         cout << "The Second given value is (" << x << "," << y << ") \n"
//              << endl;
//     }
// };

// void distance(point o1, point o2)
// {
//     float dist;
//     dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
//     cout << "The Square Root of the Two given values is :" << dist << endl;
// }
// int main()
// {
//     point p(1, 0);
//     p.display1();

//     point q(70, 0);
//     q.display2();
//     distance(p, q);
//     return 0;
// }
