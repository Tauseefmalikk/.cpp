#include<iostream>
using namespace std;
int main()
{
    int count{10};
    int i=0;
    
    do
    {
        cout <<"My name is tauseef"<<endl;
        ++i;
              
     }
     while(i<count);

     //infinite loops
     for(int i=0;;++i)
     {
        cout<<"Tauseef"<<endl;
     }

     while(true)
     {
        cout <<"Tauseef Malik"<<endl;
     }

     do{
        cout<<"My name is Tauseef Malik"<<endl;
     }
     while(true);
}