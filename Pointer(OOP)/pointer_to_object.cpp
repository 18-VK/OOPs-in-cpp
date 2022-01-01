#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// pointers to object and arrow operator
class comp
{
private:
    int real;
    int img;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void getdata()
    {
        cout << real << endl;
        cout << img << endl;
    }
};
int main()
{
    comp c1;
    comp *ptr = &c1; // pointer is pointer object c1
  
    (*ptr).setdata(1,54);
    // same as c1.setdata(1,54)

   // (*ptr).getdata();
    

    // using arrow operator which is used to point variable using pointer variable

    ptr->getdata();
    return 0;
}