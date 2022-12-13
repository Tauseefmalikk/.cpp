#include<iostream>
using namespace std;
int main()
{
    int n1={67};
    int n2={24};

    bool result=(n1<n2);
    cout << boolalpha << "result:" << result << endl;

    if(result==true)
    {
        cout << n1 << " is less than " << n2 << endl;
    }
    if(result==false)
    {
        cout << n1 << " is not less than " << n2 << endl; 
    }

    //other way
    if(result==true)
    {
        cout << n1 <<" is less than " << n2 << endl;
    }
    else
    {
        cout << n1 << " is not less than " << n2 << endl;
    }

    //other way
    if(n1<n2)
    {
        cout << n1 << " less than " << n2 << endl;
    }
    else
    {
        cout << n1 << " is not less than " << n2 << endl;

     cout << endl;
        // another example

      bool red = {false};
      bool green = {true};
      bool yellow = {false};
      bool police_stop = {true};

      if(red)
      {
        cout << "stop" << endl;
      }
      if(yellow)
      {
        cout << "stop" << endl;
      }
      if(green)
      {
        cout << "go" << endl;
      }

      //nested statement
      cout << endl;
      if(green)
      {
        if(police_stop)
        {
            cout << "stop" << endl;
        }
        else
        {
            cout << "go" << endl;
        }

        //
        if(green && !police_stop)
        {
            cout << "go" << endl;
        }
        else
        {
            cout << "stop" << endl;
        }
      }



    }
}