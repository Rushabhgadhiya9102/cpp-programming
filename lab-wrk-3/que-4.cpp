
// CREATE A PROGRAM TO PRINT ODD NUMBER FORM THE USER INPUT TO 1 USING WHILE LOOP.

#include <iostream>
using namespace std;

int main(){

    int i;

    cout << "enter the number : ";
    cin >> i;

    while(i>=0){

        if(i%2 != 0){
            cout << i << " ";
        }

        i--;

    }    

    return 0;
}