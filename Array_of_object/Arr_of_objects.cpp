#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Legends
{
    string name;
    int phone_num;

public:
    void getinfo(void)
    {

        cout << "Enter the name of Legend" << endl;
        cin >> name;
        cout << "Enter the contact number of Legend" << endl;
        cin >> phone_num;
    }
    void printinfo()
    {
        cout << "The name of Legend : " << name << endl;
        cout << "The contact number of Legend : " << phone_num << endl;
    }
};
int main()
{
    Legends Le[4]; // creating 4  objects of class legends using array
    for (int i = 0; i < 4; i++)
    {
        Le[i].getinfo();
        Le[i].printinfo();
    }

    return 0;
}