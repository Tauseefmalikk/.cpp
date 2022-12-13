#include<iostream>
int main()
{
    int number1;
    int number2;
    //addition
  std::cout<<"enter value of number1";
  std::cin>>number1;

  std::cout<<"enter the value of number2";
  std::cin>>number2;


   int result=number1+number2;
   std::cout<<"result="<<result<<std::endl;

    //subtraction
     result=number1-number2;
   std::cout<<"result="<<result<<std::endl;

   //multiplicatin
   result=number1*number2;
   std::cout<<"result="<<result<<std::endl;

   //division
    result=number1/number2;
   std::cout<<"result="<<result<<std::endl;

   //modlulus
   result=number1%number2;
   std::cout<<"result="<<result<<std::endl;
}