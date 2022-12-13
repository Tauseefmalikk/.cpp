#include<iostream>
#include<bitset>
int main()
{
    unsigned short int value{0xff0u};
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

    value=static_cast<unsigned short int>(value << 1);     //shift left by 1 bit
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

     value=static_cast<unsigned short int>(value << 1);     //shift left by 1 bit
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

     value=static_cast<unsigned short int>(value << 1);     //shift left by 1 bit
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

     value=static_cast<unsigned short int>(value << 1);     //shift left by 1 bit
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

     value=static_cast<unsigned short int>(value << 1);     //shift left by 1 bit
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;


     //shift right by 1 bit


     value=static_cast<unsigned short int>(value >> 1);     
    std::cout<<"the size of short int=" << sizeof(short int) << std::endl; 

    std::cout<<"value in binary=" << std::bitset<16>(value) <<" & dec=" << std::dec << value <<std::endl;

    //shift by multiple bits

    value=static_cast<unsigned short int>(value>>4);
    std::cout<<"the size of short int:"<< sizeof(short int) << std::endl;
    std::cout<<"value in binary:"<<std::bitset<16>(value)<<" & dec:"<<std::dec<<value<<std::endl;;
}