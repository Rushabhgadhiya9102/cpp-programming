#include <iostream>
using namespace std;

class India{
    public:
        void Wearing(){
            cout << "Dhoti-/Kurta!!" << endl;
        }
};

class Pak : public India{
    public:
        virtual void Wearing(){
            cout << "Pathani_Kurto!!" << endl;
        }
};

int main(){

    Pak *obj;
    India o1;
    Pak o2;

    obj = &o2;
    obj -> Wearing();

    return 0;
}