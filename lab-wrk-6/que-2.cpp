// WRITE A PROGRAM TO FIND MAXIMUM NUMBER FROM THE GIVEN 4 NUMBER USING NESTED IF - ELSE

#include <iostream>
using namespace std;

int main (){

    int num1, num2, num3, num4;

    cout << "enter the first number: ";
    cin >> num1;

    cout << "enter the second number: ";
    cin >> num2;

    cout << "enter the third number: ";
    cin >> num3;

    cout << "enter the fourth number: ";
    cin >> num4;



   	if(num1>num2){
		if(num1>num3){
			if(num1>num4){
				cout << num1;
			}else{
				cout << num2;
			}
		}else{
			if(num3>num4){
				cout << num3;
			}else{
				cout << num4;
			}
		}
	}else{
		if(num2>num3){
			if(num2>num4){
				cout << num2;
			}else{
				cout << num4;
			}
		}else{
			if(num3>num4){
				cout << num3;
			}else{
				cout << num4;
			}
		}
	}

    return 0;
}