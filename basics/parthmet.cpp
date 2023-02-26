#include<iostream>
using namespace std;
int main()
{
    int scores[5]{1,2,3,4,5};
    int* p_scores{scores};

    cout << "adress:" << p_scores << "value:" << *p_scores << endl;
    p_scores++; //moves forward by sizeof(int)=4 bytes
    
    cout << "Adress:" << p_scores << "value:" << *p_scores << endl;

    //
    cout << "adress:" << (p_scores+4) << "value:" <<*(p_scores+4) << endl;


    //distance between 2 elements using Pointer 
    int number[5]={1,3,45,6,7};

    int* p_number1{&number[0]}; //can also use this
    int* p_number2{number+3};
    
    cout << "p_number2-p_number1=" << *p_number2 - *p_number1 << endl;

//printing an array in reverse order
int* p_rev{number};
cout << endl << endl;
for(int i=5;i>0;i--)
{
    cout << *(p_rev + i - 1 ) << " ";
}

//comaoring pointers
cout <<"comparing pointers" << boolalpha << endl;
cout <<  "p_number1 = P_number2:" << (*p_number1 = *p_number2) << endl;
cout << "p_number1 > P_number2:" << (*p_number1 > *p_number2) << endl;


int arr1[]{1,2,3,4,5};
int arr2[]{2,5,6,7,8};

int * p_arr1{arr1};
int * p_arr2{arr2};
int * temp{nullptr};
//swapping array using pointers
temp=p_arr1;
p_arr1=p_arr2;
p_arr2=temp;
//print array 1
for(int i=0;i<5;i++)
{
    cout << p_arr1[i] << " ";
}
//print arr2
cout << endl;
for(int i=0;i<5;i++)
{
    cout << p_arr2[i] << " ";
}


}