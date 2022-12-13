#include<iostream>
using namespace std;
int main()
{
    int value[]{1,2,3,4,5};
    for(int value:value)
    {
        cout <<"value:"<<value<<endl;
    }for(int i{1};i<10;i++)
    {
        cout <<"value:"<<i<<endl;
    }
    for(int value:{1,2,3,4,5,6,7})
    cout <<"value:"<<value<<endl;

}