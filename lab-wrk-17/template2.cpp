// WAP TO MULTIPLY TWO VALUES USING TEMPLATE

#include <iostream>
using namespace std;

template <typename T>

T multiply(T a, T b){
    return a*b;
}

int main (){

    int x,y;
    cout <<"Enter the value of x : ";
    cin >> x;

    cout << "Enter the value of y : ";
    cin >> y;

    int result = multiply(x,y);
    cout << "Multiply is : " << result;

    return 0;
}