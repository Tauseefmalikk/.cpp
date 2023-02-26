#include <iostream>
using namespace std;
struct distance
{
	int feet,inches;
};
int main()
{
	struct distance d1,d2,sum;
	cout << "enter the first distance" << endl;
	cout << "enter the feet" << endl;
	cin >> d1.feet;
	cout << "enter the inches" << endl;
	cin >> d1.inches;
	
	cout << "enter the second distance" << endl;
	cout << "enter the feet" << endl;
	cin  >> d2.feet;
	cout << "enter the inches " << endl;
	cin >> d2.inches;
	 
	 
	 sum.feet=d1.feet+d2.feet;
	 sum.inches=d1.inches+d2.inches;
	 
	 while(sum.inches>=12.0)
	 {
	 	sum.inches=sum.inches-12.0;
	 	++sum.feet;
	 }
	 cout << "the sum of two distances is =" << sum.feet << "feet" << sum.inches << "inches" ;
}