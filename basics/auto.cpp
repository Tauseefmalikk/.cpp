//adult keyword(auto) used when we want compiler to guess the type
#include<iostream>
int main()
{
auto v1{12};
auto v2{13.0};
auto v3{'x'};
auto v4{123u};  //unsigned


std::cout<<v1<<std::endl;
std::cout<<v2<<std::endl;
std::cout<<v3<<std::endl;
std::cout<<v4<<std::endl;


}
