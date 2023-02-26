//functions:It is reusable piece of code that can be provided with any input and can give desirable output

//syntax

/*
return_type function name (p1,p2..)
{
  operations
  return return_type  
}

no input,no output
void function name()
{
    operations
    return return type
}

calling using function
result=function_name(arg1,arg2)

ex
int max(int a,int b)
if(a>b)
{
    return a;
else 
    return b;
}

*/
#include <iostream>
using namespace std;
void enter_bar(unsigned int age){
    if(age>18)
    {
        cout << " you are " << age << " years old" << endl;
    }
        else
        {
           cout << "you are underage" << endl;

        } 
        return;
    }


int main()
{
    int input;
  cout << "enter the age" << endl;
  cin >> input;

  enter_bar(input);


}
