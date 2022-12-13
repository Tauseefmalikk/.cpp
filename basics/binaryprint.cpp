#include<iostream>
#include<bitset>
int main()
{
    unsigned short int data {15};
    std::cout<< "dec=" << std::showbase << std::dec << data << std::endl;
    std::cout<< "oct=" << std::showbase << std::oct << data << std::endl;
    std::cout<< "hex=" << std::showbase << std::hex << data << std::endl;
    std::cout<< "binary="<< std::bitset<16>(data) << std::endl;





}