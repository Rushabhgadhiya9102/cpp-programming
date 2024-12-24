#include <iostream>
#include <string>
using namespace std;

class Students {

  public:
    int id;
    string name;
    int age;
    string course;
    float per;

};

int main() {

    Students s1; // OBJECT 1

    s1.id = 7348;
    s1.name = "Rushabh";
    s1.age = 22;
    s1.course = "Full_stack";
    s1.per = 80;

    cout << "ID : " << s1.id << endl
         << "Name : " << s1.name << endl
         << "Age : " << s1.age << endl
         << "Course : " << s1.course << endl
         << "Per : " << s1.per << endl;

    cout << endl << "second student" << endl << endl;

    Students s2; // OBJECT 2

    s2.id = 7349;
    s2.name = "Rohan";
    s2.age = 20;
    s2.course = "Full_stack";
    s2.per = 75;

    cout << "ID : " << s2.id << endl
         << "Name : " << s2.name << endl
         << "Age : " << s2.age << endl
         << "Course : " << s2.course << endl
         << "Per : " << s2.per << endl;

    cout << endl << "third student" << endl << endl;

    Students s3; // OBJECT 3

    s3.id = 7350;
    s3.name = "Rudra";
    s3.age = 19;
    s3.course = "Full_stack";
    s3.per = 79;

    cout << "ID : " << s3.id << endl
         << "Name : " << s3.name << endl
         << "Age : " << s3.age << endl
         << "Course : " << s3.course << endl
         << "Per : " << s3.per << endl;

    return 0;
}