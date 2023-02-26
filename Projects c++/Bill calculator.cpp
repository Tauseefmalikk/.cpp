#include<iostream>
using namespace std;

struct household
{
    int consumerno;
    char consumername;
    int preading;
    int creading;
};
int bill(int units)
{
    int type;
    cout << "enter 1 for domestic connection and 2 for commercial connection" << endl;
    cin >> type;

    switch(type)
    {
        case 1:
        if(units <= 100)
        {
             return units * 1;
        }
        if(units <= 200)
        {
            return (100*1)+(units-100)*2.50;
        }
        if(units <= 500)
        {
            return (100*1)+(100*2.5)+(units-200)*4;
        }
        if(units > 501)
        {
            return (100*1)+(100*2.5)+(100*4)+(units-300)*6;
        }
       case 2:
        if(units <= 100)
        {
             return units * 2;
        }
        if(units <= 200)
        {
            return (100*1)+(units-100)*4.50;
        }
        if(units <= 500)
        {
            return (100*1)+(100*2.5)+(units-200)*6;
        }
        if(units > 501)
        {
            return (100*1)+(100*2.5)+(100*4)+(units-300)*7;
        }
       
       
    }

}
int main()
{
    struct household cno,cname,pr,cr,a[7000];
    int n,i,z;
    cout << "Enter total household in area" << endl;
    cin >> n;
    
    for(i=0;i<n;i++)
    {
        cout << "Enter the consumer number of " << i+1 << " household" << endl;
        cin >> a[i].consumerno;

         cout << "Enter the consumer name of " << i+1 << " household" << endl;
         cin >> a[i].consumername;

          cout << "Enter the previous month reading of " << i+1 << " household" << endl;
          cin >> a[i].preading;

           cout << "Enter the current reading  of " << i+1 << " household" << endl;
           cin >> a[i].creading;
           
           z=bill(a[i].creading);
    }
    

    cout << endl << endl;
    cout << "consumer number\tconsumer name\tprevious reading\tcurrent reading" << endl;
    for(i=0;i<n;i++)
    {
        cout << a[i].consumerno<<"\t\t\t"<< a[i].consumername<<"\t"<< a[i].preading<<"\t\t\t"<< a[i].creading << endl;
    }

    cout << "The total bill for this month=" << z << endl;
    

}

