#include <iostream>
using namespace std;

class India{
    public:
        void Wearing(){
            cout << "Dhoti-kurta!!" << endl;
        }
};

class Pak :public India{
    public: 
        void Wearing (){
            cout << "Pathani - kurto!!" << endl;
            India::Wearing();
        }
};

int main(){
    Pak rudra;
    rudra.Wearing();

    return 0;
}