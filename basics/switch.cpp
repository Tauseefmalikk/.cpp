#include<iostream>
using namespace std;

int main()
{
    int tool;
    cout << "enter any of below given tool" << endl; 
     cin>>tool;
    cout << "1.eraser" << "\n 2.pen" << "\n 3.circle" << "\n 4.rectangle\n";
   
   

    switch(tool)
    {
        case 1:
        {
            cout << "The active tool is eraser" << endl;
            break;
        }    
        case 2:
        {
            cout << "The active tool is pen" << endl;
            break;
        }
        case 3:
        {
            cout << "The active tool is circle" << endl;
            break;
        }
        case 4:
        {
            cout << "The active tool is rectangle";
        }
    }
}