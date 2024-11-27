// WRITE A PROGRAM TO PRINT 1 TO N USING WHILE LOOP

#include <iostream>
using namespace std;

int main (){

    int i=1, num;

    cout << "enter the number : ";
    cin >> num;

    while(i<=num){

        cout << i << " ";
        i++;

    }

    return 0;
}