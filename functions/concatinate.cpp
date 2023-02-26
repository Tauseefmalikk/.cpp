//concatinate two strings uisng functions
#include<iostream>
using namespace std;
string concatinate(string s1,string s2)
{
   return s1+s2;
}
int main()
{
    string x,y;
    cout << "enter the string 1" << endl;
    getline(cin,x);
    cout << "enter the string 2" << endl;
    getline(cin,y);

    string z=concatinate(x,y);
    cout << "The concatinated string=" << z << endl;
}