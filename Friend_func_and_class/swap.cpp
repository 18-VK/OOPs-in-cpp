#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// swap data of two class using friend function
class B;

class A
{
int val1;
public:
      void getdata(int a)
      {
          val1=a;

      }
      void display()
      {
          cout<<"value before change  "<<val1<<endl;
      }
      friend void exchange(A &,B &);
};

class B
{
    int val2;
    public :
    void getdata(int b)
    {
        val2=b;
    }
    void display()
    {
        cout<<"value before change  "<<val2<<endl;
    }
    friend void exchange(A &,B &);
    // call by reference

};
void exchange (A &o1,B &o2)
{
    int temp=o1.val1;
    o1.val1=o2.val2;
    o2.val2=temp;
}
int main()
{A A1;
A1.getdata(45);
A1.display();
B B1;
B1.getdata(76);
B1.display();

exchange(A1,B1);
cout<<"value of A1 after exchange : ";
A1.display();
cout<<"value of B1 after exhange : ";
B1.display();

return 0;
}