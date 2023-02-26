#include <iostream>
using namespace std;
int main()
{
    int array[10]{1,2,3,4,5,6,7,8,9,10};
    int *p_array{array};
    
    //printing the adresses
    cout << "array:" << array << endl;
    cout << "p_array:" << p_array << endl;

    //printing the contents of array
    cout << endl << endl;

    cout << "*array:" << *array << endl;
    cout << "array:" << array[0] << endl;
    cout << "*p_array:" << *p_array << endl;
    cout << "p_array[0]" << p_array[0] << endl;

    for(int ar:array)
    {
        cout << "elements:" << ar <<endl;
    }
}