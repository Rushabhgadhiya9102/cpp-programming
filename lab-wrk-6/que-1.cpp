// WRITE A PROGRAM TO FIND MINIMUM NUMBER FROM THE GIVEN 3 NUMBER USING NESTED IF - ELSE

#include <iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout << " enter the first number: ";
    cin>>num1; 

    cout << " enter the second number: ";
    cin>>num2; 

    cout << " enter the third number: ";
    cin>>num3; 

    if(num1<num2){

        if(num1 < num3){
            cout << num1 << " num1 is minimum";
        }else {
            cout << num3 << " num3 is minimum";
        }
    }else {
        if (num2 < num3){
            cout << num2 << " num2 is minimum";
        }else{
            cout << num3 << " num3 is minimum";
        }
    }

    return 0;
}