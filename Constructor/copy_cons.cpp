#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class point
{
    int x, y;

public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    //couy constructor
    point(point &p1)
    {
        cout << "copy constructor call" << endl;
        x = p1.x;
        y = p1.y;
    }
    void show()
    {
        cout << x << endl
             << y << endl;
    }
};

int main()
{
    point p1(4, 5);
    p1.show();
    point p2(p1);
    p2.show();

    return 0;
}