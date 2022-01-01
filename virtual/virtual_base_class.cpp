#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void getroll(int roll)
    {
        roll_number = roll;
    }
};

class test : virtual public student // test has single copy of roll number
{
protected:
    int marks_math;
    int marks_physics;

public:
    void getmarks(int m, int p)
    {
        marks_math = m;
        marks_physics = p;
    }
    void show_marks()
    {
        cout << "Maths marks of roll number " << roll_number << " are " << marks_math << endl;
        cout << "Physics marks of roll number " << roll_number << " are " << marks_physics << endl;
    }
};

class sports :  virtual public student // sports has single copy of roll number
{
protected:
    int score;

public:
    void getscore(int sc)
    {
        score = sc;
    }
    void show_score()
    {
        cout << "Score of roll number " << roll_number << " are " << score << endl;
    }
};

class result : public test, public sports
// but result has two copy of roll number 1 of test 1 of sports(ambiguous error)
{
protected:
    int total;

public:
    void get_total()
    {
        total = (marks_math + marks_physics + score);
    }
    void showtotal()
    {
        // roll_number and getroll are ambiguous  here, to overcome this use virtual bse class
        cout << "total marks of roll number  " << roll_number << " are " << total << endl;
    }
    void display()
    {
        show_marks();
        show_score();
        showtotal();
    }
};

int main()
{
    result Aman;
    Aman.getroll(8);
    Aman.getmarks(118, 110);
    Aman.getscore(9);
    Aman.get_total();
    Aman.display();

    return 0;
}