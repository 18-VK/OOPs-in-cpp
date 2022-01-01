#include<iostream>
using namespace std;
// Abstract class - It is the class which consist atleast one pure virtual function
class phone 
{
    public:
    virtual void price()=0;// pure virtual function
};
class smartphone :public phone
{
    public:
    void price() 
    { 
        cout<<"This smartphone price after discount is 65,999"<<endl;
    }
};
int main()
{
    class smartphone s1;
    int pri=65999;
    s1.price();
    return 0;
}
