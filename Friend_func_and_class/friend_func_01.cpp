#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// class algebra
// {
// private:
//     int a, b;

// public:
//     void setdata(int v1, int v2)
//     {
//         a = v1, b = v2;
//     }
//     void showdata()
//     {
//         cout << "value of a " << a << endl;
//         cout << "value of b " << b << endl;
//     }
//     // declare friend function
//     friend void sum(algebra c1, algebra c2);
// };
// void sum(algebra c1, algebra c2)
// {

//     // making object c3 for accessing setdata member function(it is not necessary)
//     cout << "sum of a of object c1 and b of object c2 is " << c1.a + c2.b << endl;
// }

// int main()
// {
//     algebra c1, c2;
//     c1.setdata(7, 8);
//     c1.showdata();

//     c2.setdata(9, 6);
//     c2.showdata();
//     // passing arguments to friend function sum
//     sum(c1, c2);

//     return 0;
// }


// Example when friend function is friendly for two classes at same time
class B;  // forward declaration is necessary otherwise compiler will show error
class A
{
    private:
          int x;
    public:
          void setdata(int v1)
          {
              x=v1;
          }
          void showdata()
          {
              cout<<"value of x is : "<<x<<endl;

          }

friend void  sum(A,B);
};
class B
{
 private:
          int y;
    public:
          void setdata(int v2)
          {
              y=v2;
          }
          void showdata()
          {
              cout<<"value of y is : "<<y<<endl;

          }

friend void  sum(A,B);
};

void sum(A o1,B o2)
{
    cout<<"sum is "<<o1.x+o2.y<<endl;

}
int main()
{
    A o1;
    B o2;
    o1.setdata(8);
    o1.showdata();
    
    o2.setdata(9);
    o2.showdata();

    sum(o1,o2);
}
