#include<iostream>
using namespace std;
double division(int a,int b)
{
    if(b==0)
    {
        throw "Attempted to divide by Zero";
    }
    return (a/b);
}
int main()
{
    int x=55;
    int y=0;
    double ans=0;
    try
    {
        ans=division(x,y);
        // if no exception occur
        cout<<ans<<endl;
    }
    catch(const char* msg)
    {
        cerr<<msg<<endl; // cerr is used to print error in error window
    }
    return 0;
}