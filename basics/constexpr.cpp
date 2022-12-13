//it is simply a construct that allows us to do conditional programming at compile time
//it can save users time because you can do the computations at compile time and speeding up application
#include <iostream>


int main(){
   
   constexpr bool condition {false};

   if constexpr a (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
    return 0;
}