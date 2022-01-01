#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class base
{
public:
   virtual void hello()
    {
        cout << "hello from base " << endl;
    }
    void show()
    {
        cout<<"show from base "<<endl;
    }
};
class derived : public base
{
public:
    void hello()
    {
        cout << "hello from derived " << endl;
    }
    void show()
    {
        cout<<"show from derived "<<endl;
    }
};

int main()
{
    derived obj;
    obj.hello();
    obj.show();

    return 0;
}