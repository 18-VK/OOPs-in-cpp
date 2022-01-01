#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// we can give access of private data to a function of an another class uisng friend function 

//forward declaration
class A;
// we cant define class B after class A bcoz this (friend int  B :: calculator(A);) wants confirmation
// that you will use class B 
class B
{
public:
 // only declaration of friend function of class A in class B
    int calculator(A);
    // another function 
    int add(A);

};

class A
{
    private:
     int a,b;
     
     
     public:
     friend int  B :: calculator(A);
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        // access to function calculator of class B
        
};
// we have to define function ]
int B :: calculator(A o1)
    {
    cout<<"Sum is "<<o1.a+o1.b<<endl;
    return 0;
}
// this is invaild bcoz you did'nt give access to function add
// int B ::add( A o1)
// {
//     cout<<o1.a;
// }

// define like usual friend function but desribe of which class function but we have to give scope of function
// int B::calculator(A o1,A o2)

int main()
{
    A A1,A2;
    A1.setdata(7,6);
    A2.setdata(98,2);
    B cal;
    // note- calculator is a member function of class B but not a member function of class A
    // calculator is friend function of class A
    // A1.calculator(); is invaild
    cal.calculator(A1);
    cal.calculator(A2);
    
return 0;
}