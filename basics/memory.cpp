#include <iostream>
using namespace std;
int main()
{
    //stack:local variables,function calls..
    int number{22};
    int *p_number=&number;


    //heap:additional memory that can be queried for at run time
    int* p_number{nullptr}; //dynamically allocate space for int on heap
    p_number=new int;
    *p_number=77;

    


    //to kill alloacated memory in heap
    delete p_number;
    p_number=nullptr;  //reseting memory
    //other ways to allocate heap
    int* num1{new int (22)};
    int* num2{new int}; //junk value
}