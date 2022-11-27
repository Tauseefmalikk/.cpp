//program to calculate arthimetic mean of n numbers
#include <iostream>
using namespace std;
int main()
{
	int n,i,sum=0,arr[100];
	cout << "enter the value of n" << endl;
	cin >> n;
	
	cout << "Enter "<<n<<" values below" << endl;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		sum=sum+arr[i];
	}
	cout << "The arthimetic mean of "<<n<<" numbers is=" << sum/n << endl;
	
}
