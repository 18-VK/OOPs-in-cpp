#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class construct
{
    int a, b;

public:
    construct(int, int);
    int sum(void);
};
construct ::construct(int x, int y)
{
    a = x;
    b = y;
}
int construct::sum(void)
{
    cout << "sum is: " << a + b << endl;
    return 0;
}
int main()
{
    // implicit call to constructor
    construct c1(10, 20);
    c1.sum();
    //emplicit call to constructor
    construct c2 = construct(22, 9);
    c2.sum();
    return 0;
}