#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int length;
    int breadth;

public:
    void getdata(int l, int B)
    {
        length = l;
        breadth = B;
    }
    friend class B;
};
class B
{
private:
    int height;

public:
    void borrowdata(A o1, int H) // A is class and o1 is object of class A
    {
        cout << "length is " << o1.length << endl;
        cout << "Breadth is " << o1.breadth << endl;
        cout << "Heigth is " << H << endl;
    }
};
int main()
{
    A A1, A2; // object of class A
    A1.getdata(10, 13);
    A2.getdata(18, 15);
    B B1; // object of class B
    B1.borrowdata(A1, 12);
    B1.borrowdata(A2, 17);
    return 0;
}