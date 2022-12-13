#include<iostream>

int main()
{
    int age;
    std::string name;

    std::cout <<"enter your name:"<<std::endl;
    std::cin >> name;
    
    std::cout<<"please enter your age:"<<std::endl;
    std::cin >> age;

    std::cout <<"hello "<< name << " you are " << age << " years old" << std::endl;
    return 0;

}