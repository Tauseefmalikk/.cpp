//relational operators
#include<iostream>
int main()
{
    int number1{};
    int number2{};
    
    std::cout<<"enter the value of number1"<<std::endl;
    std::cin>>number1;
    
    std::cout<<"enter the value of number2"<<std::endl;
    std::cin>>number2;
    
    

    std::cout<<"The number1:"<<number1<<std::endl;
    std::cout<<"The number2:"<<number2<<std::endl;
   
    std::cout<<std::endl;
    std::cout<<"Comparing variables"<<std::endl;
     std::cout<<std::endl;

    std::cout<<std::boolalpha; //used to check whether a condition is true or false
    std::cout<<"number1<number2:"<<(number1<number2)<<std::endl;
    std::cout<<"number1>number2:"<<(number1>number2)<<std::endl;
    std::cout<<"number1=number2:"<<(number1==number2)<<std::endl;
    std::cout<<"number1!=number2:"<<(number1!=number2)<<std::endl;
}