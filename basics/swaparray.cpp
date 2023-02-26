#include<iostream>
using namespace std;
int main()
{
    int arr1[5]{1,2,3,4,5};
    int arr2[5]{3,6,3,2,1};
    
    int* p_arr1=arr1;
    int* p_arr2=arr2;
    int* temp{nullptr};

    temp=p_arr1;
    p_arr1=p_arr2;
    p_arr2=temp;


    for(size_t i{};i<5;i++)
    cout << "arr1:" << arr1[i] << " " <<endl;
}