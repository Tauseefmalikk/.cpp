#include<iostream>
int main()
{
    bool red_light {true};
    bool green_light {false};

    if (red_light==true)
    {
     std::cout<<"Stop"<<std::endl;
    }
    else
    {
        std::cout<<"go through"<<std::endl;
    }

    if(green_light)
    {
        std::cout<<"The light is greeen"<<std::endl;
    }
    else
    {
        std::cout<<"The light is not green"<<std::endl;
    }

    std::cout<<"sizeof(bool):"<<sizeof(bool)<<std::endl;

    //printing out a bool
    //1-true
    //0-false
    std::cout<<"red light:"<<red_light<<std::endl;
    std::cout<<"green light:"<<green_light<<std::endl;
    }
   