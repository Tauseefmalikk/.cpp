//C++ Program to Find Sum of Square of first n Natural numbers  

#include<iostream>

using namespace std;

int main()
{
    unsigned long n,i,sum=0,d;
    cout<<"Enter any number :: ";
    cin>>n;

    for(i=1;i<=n;++i)
    {
        d=i*i;
        sum+=d;
    }

    cout<<"\nSum of square of [ "<<n<<" ] Numbers = "<<sum<<"\n";
    return 0;
}
