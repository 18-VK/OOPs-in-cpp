// Dymanically initilization of object using constructor
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bank
{
    int principal_amount;
    float return_amount;
    float interest_rate;
    int years;

public:
    // declaring constructor
    bank(){};
    bank(int pri, int year, float rate); // when interest rate like 0.8,0.05
    bank(int pri, int year, int rate);   // when interest rate like 4%,6%
   void show();
};
bank::bank(int pri, int year, float rate)
{
    principal_amount = pri;
    years = year;
    interest_rate = rate;
    return_amount = principal_amount;
    for (int i = 1; i <=years; i++)
    {
        return_amount = return_amount * (1 + interest_rate); // e.g 100*(1+0.04)=104
        // in first year 100 after return e.g 104 the in sec year 104 after return 108.16 and so on..
    }
}
bank::bank(int pri, int year, int rate)
{
    principal_amount = pri;
    years = year;
    interest_rate = float(rate)/100; // typecast of rate
    return_amount = principal_amount;
    for (int i = 1; i <=years; i++)
    {
        return_amount = return_amount * (1 + interest_rate);
    }
}
 void bank::show()
    {
        cout <<"principal amount is "<<principal_amount<<"  After "<<years<<" return amount will be  "
       << return_amount << endl;
    }
int main()
{
     bank bd1,bd2;
    // we have to write a default constructor otherwise we will get errors

    // initializing object dynamically
    int p,y,R;
    float r;
    cout<<"Enter principal amount, years, and interest rate"<<endl;
    cin>>p>>y>>r;
    bd1=bank(p,y,r);
    bd1.show();
    cout<<"Enter principal amount, years, and interest rate"<<endl;
    cin>>p>>y>>R;
    bd2=bank(p,y,R);
    bd2.show();


    return 0;
}