#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base1
{
protected:
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called " << endl;
    }
};

class Base2
{
protected:
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 class constructor called " << endl;
    }
};

class derived : public Base1, public Base2
// order of call respect to declaration of derived class
{
protected:
    int derived1, derived2;

public:
    // initialising parameterized constructor
    derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called " << endl;
    }
    void display()
    {
        cout << "data1 is " << data1 << endl;
        cout << "data2 is " << data2 << endl;
        cout << "derived1 is " << derived1 << endl;
        cout << "derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived obj(5, 10, 15, 20);
    obj.display();

    return 0;
}