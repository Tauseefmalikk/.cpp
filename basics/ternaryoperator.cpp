#include<iostream>
using namespace std;
int main()
{
    int max{};
    int a{};
    int b{};
    int c{};

    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "enter the value of c" << endl;
    cin >> c;

    max = (a>b && a>c) ? (a) : ( (b>c)?(b):(c) );  
    cout << "The maximum is=" << max << endl;


}