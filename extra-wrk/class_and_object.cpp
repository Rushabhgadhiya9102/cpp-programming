#include <iostream>
using namespace std;

// CLASS CREATED

class Student{
  public: 
    string name;
    int age;
    int roll_no;
    string grade;
};

int main(){

  Student s1; // OBJECT CALLING

  cout << "Enter your name : ";
  cin >> s1.name;

  cout << "Enter your age : ";
  cin >> s1.age;

  cout << "Enter your roll_no : ";
  cin >> s1.roll_no;

  cout << "Enter your grade : ";
  cin >> s1.grade;

  cout << "Name : " << s1.name << endl
       << "Age : " << s1.age << endl
       << "Roll no : " << s1.roll_no << endl
       << "Grade : " << s1.grade ;
  
  return 0;
}