#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// using constructor in file const_in_derived_class
class student
{
protected:
    int roll;

public:
    void setroll(int r)
    {
        roll = r;
    }
};
class marks : public student
{
protected:
    int maths;
    int physics;

public:
    void setmarks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << "Marks in maths of roll number : " << roll << " are " << maths << endl;
        cout << "Marks in physics of roll number : " << roll << " are " << physics << endl;
    }
};
class result : public marks
{
private:
    int percentage;
    int total;

public:
    void set(int to)
    {
        total = to;
        percentage = (maths + physics) * 100 / total;
    }
    void display()
    {
        cout << "The percentage of roll number " << roll << " are " << percentage << endl;
    }
};
int main()
{
    result Aman;
    Aman.setroll(8);
    Aman.setmarks(118, 110);
    Aman.getmarks();
    Aman.set(300);
    Aman.display();

    return 0;
}

