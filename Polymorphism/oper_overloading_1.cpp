#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* we cannot add two objects or user define dta type's operands 
To overcome this we have to take two methods 
    -> write a member function which will perform adding (also like op. overlaoding)
    -> and using operator overloading
*/

// Method first

class sum
{
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
    // function perform addition
    // return type will be same as object type
    sum add(sum c)
    {
        sum temp;
        temp.a = a + c.a;  // a is operand of calling object and c.a is operand of argument
        temp.b = b + c.b;  // same as case a
        return temp; // In this case it will assign to s3
    }

};

int main()
{
    sum s1,s2,s3;
    s1.set(2,4);
    s2.set(5,6);
    
    // calling function
    s3=s1.add(s2);
    // s1 is calling and passing s2 as arguments
    // now s3 has temp's value

    s3.show();

    return 0;
}