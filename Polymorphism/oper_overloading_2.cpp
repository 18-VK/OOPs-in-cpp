#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* we cannot add two objects or user define dta type's operands 
To overcome this we have to take two methods 
    -> write a member function which will perform adding (it is also op. overlaoding)
    -> and using operator overloading
*/

// method operator overlaoding

/* example :- c3=c1+c2; as we have done in first part 
lets understand this c1 is calling + operator and passing c2 as argument
and assigned in c3

whenever + will call it will perform as in first part
and we can also do it with other c++ operators
*/
class sub
{
private:
    int x;
    int y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x= " << x << " y= " << y << endl;
    }
    // operator overloading

    sub operator -(sub s)
    {
        sub temp;
        temp.x = x - s.x;
        temp.y = y - s.y;
        return temp;
    }
};

int main()
{
    sub s1,s2,s3;
    s1.set(4,6);
    s2.set(6,2);
    
    s3=s1-s2; 
    // s1 is calling operator -and passing s2 as argument and assigning return value to s3
    s3.show();

    s3=s2-s1;
    // s2 is calling operator -and passing s1 as argument and assigning return value to s3
    s3.show();


    return 0;
}