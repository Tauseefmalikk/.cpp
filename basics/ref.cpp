#include<iostream>
using namespace std;
int main()
{
    int a{4};
    double b{66};

    //refrences
    int& ref_a{a};
    double ref_b{b};

    cout<<"The value of a="<<a<<endl;
    cout<<"&a="<<&a<<endl;
    cout <<"The value of b="<<b<<endl;
    cout<<"&b="<<&b<<endl;

    cout<<"the ref a="<<ref_a<<endl;
    cout<<"&ref_a="<<&ref_a<<endl;
    cout<<"The ref b="<<ref_b<<endl;
    cout<<"&ref_b="<<&ref_b<<endl;
}