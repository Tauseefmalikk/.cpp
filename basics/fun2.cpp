#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
   {
        return b;
    }
        
    }

int main()
{
    int x,y;
    cout << "enter the value of a" << endl;
    cin >> x;
    cout << "enter the value of b" << endl;
    cin >> y;

    int max=(x,y);
    cout << "the max=" << max << endl;


}