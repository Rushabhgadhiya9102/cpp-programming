// WRITE A PROGRAM TO PRINT EVEN NUMBERS 1 TO N USING DO-WHILE LOOP

#include <iostream>
using namespace std;

int main() {

    int i=1 ,num;

    cout << "enter the number : ";
    cin >> num;

    do {

        if(i % 2 == 0){

        cout << i << " ";
        
        }

        i++;
        
    } while(i < num);

    return 0;
}