#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// read and write using single fstream class
int main()
{
   fstream obj;
   // open file for read and write both
  obj.open("sample_2.txt",ios::in | ios:: out | ios:: app);
   // ios:: app - if file contain any content then ios::app will append pointer to the end of file
   string data;
  // getline(cin,data); // taking input of string from user

   // writing to the file
   obj<<data<<endl;
   obj.close(); // close file

   // reading from file
   obj.open("sample_2.txt",ios::in | ios:: out);
  // getline(obj,data);
  // cout<<data; 
  while(obj.eof()==0)
  {
      getline(obj,data);
      cout<<data<<endl;
  }
   return 0;
}