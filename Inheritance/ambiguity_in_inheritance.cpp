#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A
{
public:
   
    void greet()
    {
        cout << "Good morning " << endl;
    }
};
class B
{
public:

    void greet()
    {
        cout << "Good Afternoon " << endl;
    }
};
class derived : public A, public B
{
public:
    void func()
    {
        A::greet();
        
    }
};
int main()
{
    A obj;

    B obj1;

    derived object;
    object.func();

    return 0;
}