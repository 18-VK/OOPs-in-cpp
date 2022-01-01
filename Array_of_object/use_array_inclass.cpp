#include "iostream" // We can add header files like this
#include "bits/stdc++.h"
using namespace std;

class shop
{
    int itemID[100]; // Assume limit of shop is 100 items
    int itemprice[100];
    int counter;

public:
    void count(void) { counter = 0; } // for counting items of each object(shop)
    void getinfo(void);               // for getting information of items
    void displayinfo(void);           // for display information of items
};
void shop::getinfo(void)
{
    cout << "Enter the ID of item no:" << counter + 1 << endl; // initially 0 for each object
    cin >> itemID[counter];
    cout << "Enter the price of item no:" << counter + 1 << endl; // initially 0 for each object
    cin >> itemprice[counter];
    counter++;
}
void shop::displayinfo(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item no: " << i + 1 << " with item ID " << itemID[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop shop1, shop2; // objects are shop1 ,shop2
    // initialise counter for shop1
    cout << "Enter the details items of shop 1" << endl;
    shop1.count(); // intially 0
    // At ever call of getinfo program will add an item
    // we can call member function with the help of loop
    shop1.getinfo();
    shop1.getinfo();
    shop1.getinfo();
    cout << "The detalis of items of shop 2" << endl;
    shop1.displayinfo();

    cout << "Enter the details items of shop 2 " << endl;
    shop2.count();
    shop2.getinfo();
    shop2.getinfo();
    shop2.getinfo();
    cout << "The details of items of shop 2 " << endl;
    shop2.displayinfo();

    return 0;
}