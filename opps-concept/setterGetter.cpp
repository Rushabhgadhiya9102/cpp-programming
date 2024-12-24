// SETTER AND GETTER

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
        id = i;
        name = n;
        age = a;
        course = c;
        per = p;
    }

    void getData() {

        cout << "ID : " << id << endl
             << "Name : " << name << endl
             << "Age : " << age << endl
             << "Course : " << course << endl
             << "Percentage : " << per << endl;

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