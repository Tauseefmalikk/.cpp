#include <iostream>
using namespace std;

int add (int num1,int num2)
{
    int sum=num1+num2;
    return sum;

}
int main()
{
    int x,y;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of y" << endl;
    cin >> y;

    int ans=add(x,y);
    cout << "The sum of" << x << "and" << y << "=" << ans << endl; 
}