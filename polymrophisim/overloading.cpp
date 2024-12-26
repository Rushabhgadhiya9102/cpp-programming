#include <iostream>
using namespace std;

class Vehicle {
    public:
        void Truck (){
            cout << "Empty truck running!!" << endl;
        }

        void Truck( int a){
            cout << "Truck is running with " << a << " passangers!!" << endl;
        }    

        void Truck(int a, int g){
            cout <<"Truck is running with " << a << " passengers and " << g << " goods" << endl;
        }
};

int main (){

        Vehicle obj;

        obj.Truck();
        obj.Truck(10);
        obj.Truck(5,20);

    return 0;
}