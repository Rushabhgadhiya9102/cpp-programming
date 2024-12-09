#include <iostream>
using namespace std;

// USER - DEFINE

int divide(int a ){

    if(a%3 == 0 && a%5 == 0){
        cout << "the given number is divisible both 3 and 5";
    } else {
        cout << "the given number is not divisible both 3 and 5";
    }

}

// MAIN - FUNCTION

int main(){

    int num,result;

    cout << " enter the number: ";
    cin >> num;

    divide(num);

    return 0;
}