#include<iostream>
using namespace std;
int main()
{
    int scores[]={1,2,3,4,5,6,7,8};
    for(int i:scores)
    cout<<"scores["<<i<<"]:"<<scores[i]<<endl;

    cout<<"size of scores:"<<sizeof(scores)<<endl;
}