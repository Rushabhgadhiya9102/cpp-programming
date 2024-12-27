#include <iostream>
using namespace std;

// FUNCTION BASED TEMPALTE

    template<typename T>

        T add(T a, T b){
            return a + b;
        }


int main (){

    int num1,num2,result;
        cout << "Enter the number : ";
        cin >> num1;

        cout << "Enter the number : ";
        cin >> num2;

        result = add(num1, num2);
        cout << result; 

    return 0;
}