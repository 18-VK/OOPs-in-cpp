#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class construct
{
    int a,b;
    public:
         // declare a default constructor
        construct();
        // member function
        int sum();
        
};
//define constructor
construct :: construct()
{
    a=10;
    b=20;

}
// define member function
int construct::sum()
{
cout<<"sum is : "<<a+b<<endl;
return 0;
}
int main()
{
    construct c1,c2,c3;
    // now no need to initialize value to object of class
    // but in default constructor all object have same value, to initialize value individually 
    // we can use parameterized constructor
    c1.sum();
    c2.sum();
    c3.sum();

    
return 0;
}