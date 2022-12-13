//compound assignment opperators
//used to increment/decrement by more than 1 
#include<iostream>
int main()
{
    int value {35};
    std::cout<<"The value is:"<<value<<std::endl;

    std::cout<<std::endl;
    value +=5;
    std::cout<<"the value after (+=5):"<<value<<std::endl;
    
    std::cout<<std::endl;
    value -=5;
    std::cout<<"the value after(-=5):"<<value<<std::endl;

    std::cout<<std::endl;
    value *=5;
    std::cout<<"The value (after *=5):"<<value<<std::endl;

    std::cout<<std::endl;
    value /=5;
    std::cout<<"The value (after /=):"<<value<<std::endl;

    std::cout<<std::endl;
    value %=5;
    std::cout<<"The value (after %=):"<<value<<std::endl;

}