#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class game
{
    int COD_ID;
    string username;
    static int num_of_players; // default value is 0 and we cant define static var inside the class
public:
    void getinfo(void)
    {
        num_of_players++;
        cout << "Enter the username of player : " << num_of_players << endl;
        cin >> username;
        cout << "Enter the COD ID of player" << endl;
        cin >> COD_ID;
    }
    void dis_info(void)
    {
        cout << "The username of player is :" << username << endl;
        cout << "The COD ID of player :" << COD_ID << endl;
        cout << "Number of player is :" << num_of_players << endl;
    }

    // static Data member
    static void count (void)
    {
     // cout<<COD_ID; we cant use non static data mem and  functions
     cout<<"Total Numbers of players"<<num_of_players<<endl;
    }
};
int game ::num_of_players; // default value is 0 but you can initialise also
int main()
{
    game player1, player2, player3;
    player1.getinfo();
    player1.dis_info();

    player2.getinfo();
    player2.dis_info();

    player3.getinfo();
    player3.dis_info();

    // callling static member function
    game::count();

    return 0;
}