#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int rows{3};
    int cols{4};
    for(int i=0;i<rows;i++)
    {
        for(int i=0;i<cols;i++)
        {
          cout<<"(row" << setw(3) << rows << ",col" << setw(3) << cols << ")";
        }   
        cout<<endl;
    }

//break and continue
int i{0};
int count {5};
for(i=0;i<count;++i)
{
  if(i==3)
  break;    //breaks out of the loop-at i=3
  cout<<"i:"<<i<<endl;
}
cout<<"loop done"<<endl;


for(i=0;i<count;++i)
{
  if(i==3)
  continue;    //skips loop at i=3
  cout<<"i:"<<i<<endl;
}
cout<<"loop done"<<endl;

}