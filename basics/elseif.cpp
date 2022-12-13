#include<iostream>
using namespace std;
const int pen {10};
const int marker {33};
const int circle {36};
const int eraser {77};
int main()
{
    int tool {pen};

    if(tool==marker)
    {
        cout << "active tool is marker" << endl;
    }
    else if(tool==pen)
    {
        cout << "active tool is pen" << endl;
    }
    else if(tool==eraser)
    {
        cout << "active tool is eraser" << endl;
    }
    else if(tool==circle)
    {
        cout << "active tool is circle" << endl;
    }

}