#include <iostream>
int main()
{
    /*
    //braced intializers

    int elephant_count;  //it will contain garbage value
    int lion_count{};    //it will intialize to zero
    int dog_count{20};   //intializes to 20
    int cat_count{90};   //intializws to 90

    int domesticated_animals{dog_count+cat_count};
    std::cout<<"domesticated animals:"<<domesticated_animals;
    

    //functional intializers
    int apples(5);
    int oranges(7);
    int fruit_count(apples+oranges);
    int narrowing_conversion(2.9);

    std::cout<<"fruit count="<<fruit_count<<std::endl;
    std::cout<<"narrowing conversion="<<narrowing_conversion;
    */

   //assignment  notation

   int bike_count=2;
   int car_count=6;
   int vehicle_count=bike_count+car_count;
   int narrowing_conversion=2.9;
   
   std::cout<<"vehicle count:"<<vehicle_count<<std::endl;
   std::cout<<"narrowing conversion:"<<narrowing_conversion<<std::endl;
    
}