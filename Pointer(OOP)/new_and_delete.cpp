#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// New and delete keywords(operator)
//New operator is used to allocate dynamic memory 
//Delete operator is used to deallocate dynamic memory

int main()
{
int *p=new int(25); // allocation dynamically
cout<<p<<endl; //address in hexadecimal
cout<<*p<<endl; // value of pointer variable

// deallocation
delete p;
cout<<*p<<endl; // garbage value because value of varaible has been deleted from the memory location

float *q=new float(25.98);
cout<<q<<endl;
cout<<*q<<endl;

delete q;
cout<<q<<endl;
cout<<*q<<endl;

// allocation of an array
int *d=new int [2];
d[0]=20;
// *d=20; also right way
d[1]=30;
//*(d+1)=30; also right way , +1 means at block no. second
cout<<*d<<endl;
cout<<*(d+1)<<endl;
return 0;
}