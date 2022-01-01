#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class test
{
    private:
    int x;
    public:
    // when same name as local variable of men=mber variable
     void setdata(int x)
     {
         // x=x; will give error or give garbage value
         this->x=x;
         
     }
     void print()
     {
         cout<<x<<endl;
     }

     // return refernce of current obj
     test & giveref()
     {
         return *this;
     }
};
int main()
{
    test obj;
    obj.setdata(5);
    obj.print();
return 0;
}