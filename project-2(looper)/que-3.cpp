#include <iostream>
using namespace std;

int main (){

    int num1,first,last,sum;

    cout << "Enter the number : ";
    cin >> num1;

    last = num1 % 10;

    while (num1 > 10){

        num1 /= 10;

    }

    first = num1;
    sum = first + last;

    cout << "the total of first and last digit : " << sum << endl;

    return 0;
}