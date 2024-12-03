#include <iostream>
#include <string.h>
using namespace std;

class Student{              // DECLARE THE CLASS 
     public:                // ACCESS SPECIFIER = PUBLIC
        int grId;
        char name[100];
        int age;
        char courseName[100];

    };

int main(){

    Student s1;     // DECLARE THE OBJECT

    // ASSIGN THE VALUE

    s1.grId = 7348;
    strcpy(s1.name,"Rushabh_gadhiya");
    s1.age = 22;
    strcpy(s1.courseName, "full-stack-development");

    // ASSIGN THE VALUE

    // PRINT THE STATEMENT

    cout << "Grid : " << s1.grId << endl
         << "Name : " << s1.name << endl
         << "Age : " << s1.age << endl
         << "Coursename : " << s1.courseName;  
         
    // PRINT THE STATEMENT           

    return 0;
}