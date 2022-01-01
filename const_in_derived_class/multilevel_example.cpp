#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll;

public:
    student(int r)
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
    // initialize value to object of base class student
    marks(int r, int m, int p) : student(r)
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
    // initialize value to object of base class student
    result(int r, int m, int p, int t) : marks(r, m, p)
    {
        total = t;
        percentage = (maths + physics) * 100 / total;
    }

    void display()
    {

        cout << "The percentage of roll number " << roll << " are " << percentage << endl;
    }
};

int main()
{
    result Aman(8,118,110,300);
    Aman.getmarks();
    Aman.display();

    return 0;
}