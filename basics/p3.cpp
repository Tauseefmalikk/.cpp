#include<iostream>
using namespace std;
int main()
{
    const char *students []{   //aray of non const ponter to const char
        "Tauseef malik",      //for cosnt pointer to cosnt data (const char* const students[])
        "malik",              // 
        "faxeem",
        "faheem",
        "shadab",
    };

    //printing out the students
    cout << "students:xxxxxxxxxxxxxxxxxxxxx                                                                                                                  " << endl;
    for (const char *student:students)
    {
        cout << student << endl;
    }
    //*students[0]='k'  ///compiler error cause its a cosnt data

    //swaping a student
    cout << endl;

    const char * new_student{"bob"};  //pointing it somewhere else
    students[0]=new_student;

   cout << "students:" << endl;
    for (const char *student:students)
    {
        cout << student << endl;
    }
}