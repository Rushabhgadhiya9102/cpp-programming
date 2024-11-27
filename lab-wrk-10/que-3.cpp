/* WRITE A PROGRAM TO PRINT THE MULTIPLICATION TABLE OF THE
NUMBER N USING ANY TYPE OF LOOP */

#include <iostream>
using namespace std;

int main(){

    int i, num, result;

    cout << "enter the number : ";
    cin >> num;

    for(i=1;i<=10;i++){

        result = num*i;

        cout << num << " x " << i << " : " << result << endl;
    }

    return 0;
}