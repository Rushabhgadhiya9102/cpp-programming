#include <iostream>
using namespace std;

class Vehicle{
    public:
        virtual void show(){
            cout << "Running" << endl;
        }
};

class Car : public Vehicle{

    public:
        void show(){
            cout << "Car is red"<< endl;
        }
};

class Bike : public Car{

    public:
        void show(){
            cout << "Bike is blue" << endl;
        }
};

int main(){

    Vehicle* a;
    Car b;
    Bike c;

    a=&c;

    a->show();
    b.show();

    return 0;
}