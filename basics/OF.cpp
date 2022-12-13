//Output formatting
#include<iostream>
#include<iomanip>
#include<ios>
int main()
{
    //std::setw() used to specify width for text you wanna print

    std::cout<<"fotmatted table:"<<std::endl;
    
    std::cout<< std::setw(10) <<"first name"<<std::setw(10)<<"last name"<<std::endl;
    std::cout<< std::setw(10) <<"Tauseef"<<std::setw(10)<<"malik"<<std::endl;
    std::cout<< std::setw(10) <<"Taufeeq"<<std::setw(10)<<"malik"<<std::endl;

    //or

    int cwidth{15};
     std::cout<<"fotmatted table:"<<std::endl;
    
    std::cout<< std::setw(cwidth) <<"first name"<<std::setw(cwidth)<<"last name"<<std::setw(cwidth)<<"age"<<std::endl;
    std::cout<< std::setw(cwidth) <<"Tauseef"<<std::setw(cwidth)<<"malik"<<std::setw(cwidth)<<"20"<<std::endl;
    std::cout<< std::setw(cwidth) <<"Taufeeq"<<std::setw(cwidth)<<"malik"<<std::setw(cwidth)<<"26"<<std::endl;
     
     //std::showpos
     //std::noshowpos used to show or hide + sign

     int pos{4};
     int neg(-4);
     std::cout<<"positive number:"<<pos<<std::endl;
     std::cout<<"negative number:"<<neg<<std::endl;
     
     std::cout<<std::endl;
     std::cout<<std::showpos;
     std::cout<<"positive number:"<<pos<<std::endl;
     std::cout<<"negative number:"<<neg<<std::endl;

     //std::uppercase
     std::cout<<std::endl;
     


     std::cout<<"fotmatted table:"<<std::endl;

    std::cout<<std::uppercase;
    std::cout<< std::setw(10) <<"first name"<<std::setw(10)<<"last name"<<std::endl;
    std::cout<< std::setw(10) <<"Tauseef"<<std::setw(10)<<"malik"<<std::endl;
    std::cout<< std::setw(10) <<"Taufeeq"<<std::setw(10)<<"malik"<<std::endl;




}















