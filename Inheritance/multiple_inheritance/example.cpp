#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int value1;

public:
    void setdata1(int a)
    {
        value1 = a;
    }
};
class base2
{
protected:
    int value2;

public:
    void setdata2(int a)
    {
        value2 = a;
    }
};
class base3
{
protected:
    int value3;

public:
    void setdata3(int a)
    {
        value3 = a;
    }
};
class derived : public base1, public base2,public base3
{
public:
    void display()
    {
        cout << "Value of value1 is " << value1 << endl;
        cout << "Value of value2 is " << value2 << endl;
        cout << "Value of value3 is " << value3 << endl;
        cout << "The sum of these values is " << value1 + value2+value3 << endl;
    }
};
int main()
{
    derived obj;
    obj.setdata1(23);
    obj.setdata2(7);
    obj.setdata3(10);
    obj.display();

    return 0;
}