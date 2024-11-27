// WRITE A PROGRAM TO PRINT THE SUM OF ALL NUMBRS FROM 1 TO N USING FOR LOOP 

#include <iostream>
using namespace std;

int main() {

    int i, num, sum = 0;

    cout << "enter the number : ";
    cin >> num;

    for(i = 1; i <= num; i++) {
        sum += i;
    }

    cout << "the sum of all numbers is: " << sum;

    return 0;
}