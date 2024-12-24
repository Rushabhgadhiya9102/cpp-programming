// THIS KEYWORD USING SETTER AND GETTER

#include <iostream>
using namespace std;

class Students {

  public :
    int id;
    string name;
    int age;
    string course;
    float per;

    void setData(int i, string n, int a, string c, float p) {
        this -> id = i;
        this -> name = n;
        this -> age = a;
        this -> course = c;
        this -> per = p;
    }

    void getData() {

        cout << "ID : " << this -> id << endl
             << "Name : " << this -> name << endl
             << "Age : " << this -> age << endl
             << "Course : " << this -> course << endl
             << "Percentage : " << this -> per << endl;

    }

};

int main() {

    Students s1; // OBJECT 1

    s1.setData(7348, "rushabh", 22, "Full stack ", 70);
    s1.getData();

    Students s2; // OBJECT 2

    s2.setData(7349, "rohan", 20, "Full stack ", 75);
    s2.getData();

    return 0;
}