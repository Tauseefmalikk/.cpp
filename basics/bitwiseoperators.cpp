#include<iostream>
#include<iomanip>
#include<bitset>
int main()
{
    int column_width{30};
    unsigned char value1{0x3}; //0000 0011
    unsigned char value2{0x5}; //0000 0101

    std::cout << "value1:" << std::setw(column_width) << std::bitset<16>(value1) << std::endl;

    std::cout << "value2:" << std::setw(column_width) << std::bitset<16>(value2) << std::endl;


    //AND

    std::cout << std::endl;
    std::cout << "Bitwise AND:" <<std::endl;
    std::cout << "value1 & value2:" << std::setw(column_width) << std::bitset<16>(value1 & value2) << std::endl;
   
    //or
      std::cout << std::endl;
    std::cout << "Bitwise OR:" <<std::endl;
    std::cout << "value1 | value2:" << std::setw(column_width) << std::bitset<16>(value1 | value2) << std::endl;

    //XOR
     std::cout << std::endl;
    std::cout << "Bitwise XOR:" <<std::endl;
    std::cout << "value1 ^ value2:" << std::setw(column_width) << std::bitset<16>(value1 ^ value2) << std::endl;






}