#include <iostream>
#include <fstream> // base class for read and write
/*
Theory
:- ifstream - used for read contents of file
:- ofstream- used for write conents in file
Note :- ifstream and ofstream are derived from fstream base class
we will perform read from and  write to an external file
*/
using namespace std;
int main()
{
    // creating object and passing filename which we want to open
    ofstream obj("sample.txt"); // opening file using constructor
    string st = "Fu*king awesome";
    string st1="Lets have some fun";
    obj << st<<endl<<st1;   // write content of st in sample file
    obj.close(); // close file
    // creating object and passing filename which we want to open
    ifstream obj2("sample.txt"); // opening file using constructor
    string st2;
    // printing on console
    // reading whole line from file
    //getline(obj2, st2);
    //read whole content of file
    // use  efo()- end of file function
    // efo() gives true(e.g 1 ) when there are no data to read and otherwise false(e.g 0)
    while(obj2.eof() == 0)
    {
        getline(obj2,st2);
        cout<<st2<<endl;
    }
  //  cout << st2;
    return 0;
}
