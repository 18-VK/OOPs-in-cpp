#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// access mode:- public


// class base
// {
// private:
//     int data1;

// public:
//     int data2;
//     void setdata(void)
//     {
//         data1 = 10;
//         data2 = 15;
//     }
//     int return_data1(void)
//     {
//         return data1;
//     }
// };
// class derived : public base
// {
//     int data3;

// public:
//     void process(void)
//     {
//         data3 = data2 * return_data1(); // data is public in base so we can directly access but data1 is private
//     }
//     void display(void)
//     {
//         cout<<"value of data1 is "<<return_data1()<<endl;
//         cout<<"value of data2 is "<<data2<<endl;
//          cout<<"value of data3 is "<<data3<<endl;
//     }
// };
// int main()
// {
//     derived obj;
//     obj.setdata();
//     obj.process();
//     obj.display();

//     return 0;
// }


// access mode:- private

class base
{
private:
    int data1;

public:
    int data2;
    void setdata(void)
    {
        data1 = 10;
        data2 = 15;
    }
    int return_data1(void)
    {
        return data1;
    }
};
class derived : private base
// now all member of base class are private in derived class 
// thats why setdata() function is unaccessable directly
// but we can use it inside class 
{
    int data3;

public:
    void process(void)
    {
        setdata();
        data3 = data2 * return_data1(); // data is public in base so we can directly access but data1 is private
    }
    void display(void)
    {
        cout<<"value of data1 is "<<return_data1()<<endl;
        cout<<"value of data2 is "<<data2<<endl;
         cout<<"value of data3 is "<<data3<<endl;
    }
};
int main()
{
    derived obj;
    //obj.setdata();
    obj.process();  
    obj.display();

    return 0;
}
