//implicit c=conversion goes from smaller to bigger type in memory size
//it is done by the compiler itself without our involment when it detects differnt types 

//implicit
#include<iostream>
int main()
{
    double price{69.8};
    int units{3};

    double total_price=price*units;

    std::cout<<"Total price="<<total_price<<std::endl;      //int 4 bytes
    std::cout<<"size of total price="<<sizeof(total_price)<<std::endl;; //double 8 bytes
                           
    int x;
    double y{6.6};
    x=y; //here incase of assignment conversion goes fron right to left  (double to int)                                      

     std::cout<<"the value of x="<<x<<std::endl;
     std::cout<<"the size="<<sizeof(x)<<std::endl;  

   //Explicit conversion
   //conversions done by user itself
   double t{5.5};
   double z{6.6};

  int sum=static_cast<int>(t)+static_cast<int>(z);
   std::cout<<"the sum="<<sum<<std::endl;

   sum=static_cast<int>(t+z);
   std::cout<<"the sum="<<sum<<std::endl;



}