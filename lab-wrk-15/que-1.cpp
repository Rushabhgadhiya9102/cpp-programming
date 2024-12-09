#include <iostream>
using namespace std;

// USER - DEFINE

int cube(int a){

    return a*a*a;

}

// MAIN - FUNCTION

int main(){

    int num,result;

    cout << "enter the number: ";
    cin >> num;

    result = cube(num);

    cout << "the cube of the given number: " << result;

    return 0;
}