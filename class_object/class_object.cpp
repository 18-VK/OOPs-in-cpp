#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll_num;
    string name;
    // method 1 to declare and define member function
    //    void getinfo(int roll,string nam)
    //    {
    //        roll_num=roll;
    //        name=nam;
    //    }

    //declaration for method 2
    void getinfo(int roll, string nam);
    void showinfo()
    {
        cout << "name is " << name << endl;
        cout << "roll number is " << roll_num << endl;
    }
};
//define member function
void student::getinfo(int roll, string nam)
{
    roll_num = roll;
    name = nam;
}
int main()
{

    student student1, student2;
    // direction access (without member funtion)
    student1.roll_num = 46;
    student1.name = "mike";
    student1.showinfo();

    // access with member function
    // student1.getinfo(45,"rahul");
    // student1.showinfo();
    // student1.getinfo(35,"lalit");
    // student1.showinfo();

    return 0;
}