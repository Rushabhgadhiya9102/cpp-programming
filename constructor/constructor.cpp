#include <iostream>
using namespace std;

class City{

    public:
        int id;
        
        // DEFAULT CONSTRUCTOR

        City(){
            id = 5;
            cout << "Welcome city" << this->id << endl;
        }

        // PARAMERTISED CONSTRUCTOR

        City(int n){
            this-> id = n;
            cout <<"ID is : " << this->id << endl;
        }

        // COPY CONSTRUCTOR

        City(City &obj){
            obj.id=7;
            this->id=obj.id;
        }

        //DESTRUCTOR

        ~City(){
            cout << "Object is destroyed...." << endl;
        }
};

int main(){

    City c1; // DEFAULT
    City c2(3); // PARAMERTISED

    City c3 = c2; // SHALLOW COPY
    City c4(c2); // DEEP COPY

    cout << c4.id << endl;
    cout << c2.id << endl;

    return 0;
}