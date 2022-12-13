#include<iostream>
int main()
{
    int age;
    std::string full_name;

    std::cout<<"please enter your full name" << std::endl;
    std::getline(std::cin,full_name);

    std::cout<<"enter your age:"<<std::endl;
    std::cin >> age;

    std::cout<<"Hello "<< full_name <<" ,Your age is "<<age<< std::endl;
    return 0;
}