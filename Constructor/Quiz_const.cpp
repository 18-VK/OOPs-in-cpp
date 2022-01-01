#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class point
{
    int x,y;
    public:
       point(int,int);// const.
    friend int distance(point,point);
};
point::point(int a,int b)
{
    x=a;
    y=b;
}
int distance(point A,point B)
{
float result=0;
result=sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
cout<<"The distance between two point is : "<<result<<endl;
return 0;
}
int main()
{
    point A(2,4);
    point B(4,8); 
    distance(A,B);
return 0;
}