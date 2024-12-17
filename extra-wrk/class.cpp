#include <iostream>
using namespace std;

// CLASS DECLARING

class Student {

    public:

        int id;
        string name;

        void insert( int i, string n){

            id = i;
            name = n;

        }

        void display(){

            cout << "Id : " << id << endl
                 << "Name : " << name << endl << endl;

        }

};

// MAIN FUNCTION

int main(){

    Student s1;
    Student s2;
    Student s3;

    s1.insert(201,"Rushabh");
    s2.insert(202,"Rohan vision");
    s3.insert(203,"Rudra gondaliya");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}