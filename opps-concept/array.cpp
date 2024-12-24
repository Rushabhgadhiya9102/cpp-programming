// ARRAY AND LOOPS USING SETTER AND GETTER

#include <iostream>
using namespace std;

class Students {

    public : 
        int id;
        string name;
        int age;
        string course;
        float percentage;


    void setData(){

        cout << "Enter ID : ";
        cin >> id;

        cout << "Enter your name : ";
        cin >> name;

        cout << "Enter your age : ";
        cin >> age;

        cout << "Enter your course : ";
        cin >> course;

        cout << "Enter your percentage : ";
        cin >> percentage;

    }

    void getData(){
        cout << "ID : " << id << endl
             << "Name : " << name << endl
             << "Age : " << age << endl
             << "Course : " << course << endl
             << "Percentage : " << percentage << endl;
    }
};

int main(){

   int size,i;

   cout << "enter the array size : ";
   cin >> size;

   Students s[size];

   for (i = 0 ; i < size ; i++)
   {
        s[i].setData();
   }

   for (i = 0 ; i < size ; i++)
   {
        s[i].getData();
   }


    return 0;
}