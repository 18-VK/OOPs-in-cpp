#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Inheritance use:- multilevel
// access/visibility mode:- public
class simplecalulator
{
protected:
    int val1, val2;
    char oper;

public:
    void set()
    {
        cout << "enter val1 " << endl;
        cin >> val1;
        cout << "enter val2 " << endl;
        cin >> val2;
    }

    void perform_simp_op()
    {
        cout << "Enter the operator with whom  you want to perform e.g +,-,s for sq. root, p for sqaure,c for cube "
             << endl;
        cin >> oper;

        switch (oper)
        {
        case '+':
            cout << "The sum of " << val1 << " and " << val2 << " is : " << (val1 + val2) << endl;
            break;
        case '-':
            cout << "The difference of " << val1 << " and " << val2 << " is : " << (val1 - val2) << endl;
            break;
        case '*':
            cout << "The product of " << val1 << " and " << val2 << " is : " << (val1 * val2) << endl;
            break;
        case '/':
            cout << "The division of " << val1 << " and " << val2 << " is : " << (double)(val1 / val2) << endl;
            break;
        default:
            cout << "You entered wrong operator for simple calculator please try scientific" << endl;
            break;
        }
    }
};
class sci_calculator : public simplecalulator
{
public:
    
    void perform_sci()
    {
        perform_simp_op();
        switch (oper)
        {
        case 's':
            cout << "Square root of " << val1 << " is " << sqrt(val1) << endl;
            cout << "Square root of " << val2 << " is " << sqrt(val2) << endl;
            break;
        case 'p':
            cout << "square of " << val1 << " is " << pow(val1, 2) << endl;
            cout << "square of " << val2 << " is " << pow(val2, 2) << endl;
            break;
        case 'c':
            cout << "cube of " << val1 << " is " << pow(val1, 3) << endl;
            cout << "cube of " << val2 << " is " << pow(val2, 3) << endl;
            break;
        default:
            break;
        }
    }
};
class hybrid_cal : public sci_calculator
{
  
};
int main()
{
//    simplecalulator user;
//    cout<<"working simple calculator "<<endl;
//    user.set();
//    user.perform_simp_op();

//    sci_calculator user1;
//    cout<<"working sci claculator "<<endl;
//    user1.set();
//    user1.perform_sci(); // perform_sci we can also use perform_simp_op 

   hybrid_cal user2;
   cout<<"Working hybrid calculator "<<endl;
   user2.set();
   user2.perform_sci();
    return 0;
}