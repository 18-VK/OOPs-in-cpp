#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class match
{

public:
    string name;
    int first_runs;
    int second_runs;
    void getscore(void)
    {
        cout << "Enter the name of player" << endl;
        cin >> name;
        cout << "Enter the runs of player name : " << name << " in 1st inning" << endl;
        cin >> first_runs;
        cout << "Enter the runs of player name : " << name << " in 2nd inning" << endl;
        cin >> second_runs;
    }
    void printscore(match pla, match plb, match plc)
    {
        cout << "The sum of Score of player name : " << plc.name << " in both inning : " << (pla.first_runs + plb.second_runs) << endl;
    }
};

int main()
{
    match pl1, pl2, total;

    pl1.getscore();
    pl2.getscore();

    total.printscore(pl1, pl1, pl1); // sum of score of pl1 in both inning with name of player
    total.printscore(pl2, pl2, pl2); //  sum of score of pl2 in both inning with name of player
    return 0;
}