#include <iostream>
using namespace std;

// CLASS BASED TEMPLATE

template<typename T1, typename T2>

class Pair {

  private:
        T1 x;
        T2 y;

  public:
        Pair(T1 x, T2 y) {
            this->x = x;
            this->y = y;
        }

        void getData(){
            cout << "x : " << this->x << " ,y : " << this->y << endl;
        } 

};

int main() {

    int num1;
    double num2;

            cout << "Enter the number : ";
            cin >> num1;

            cout << "Enter the number : ";
            cin >> num2;

    Pair<int, double> obj(num1,num2);
    obj.getData();

    return 0;
}