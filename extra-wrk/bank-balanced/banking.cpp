#include <iostream>
#include <iomanip>
using namespace std;

//USER DEFINE FUNCTION

 void showBalance(double balance){
    cout << "your balance is : $" << setprecision(2) << fixed << balance << endl;
 }

 double deposit(){
    return 0;
 }

 double withDraw(double balance){

 }

//USER DEFINE FUNCTION

int main(){

    double balance = 0;
    int choice = 0;

    do{

    cout << "1. show balance" << endl 
         << "2. deposite money" << endl 
         << "3. withdraw money" << endl
         << "4. exit";

    cout << "enter the choice : ";
    cin >> choice;

    switch(choice){
        case 1: 
            showBalance(balance);
            break;

        case 2: 
            balance += deposit();
            break;

        case 3:
            balance -= withDraw(balance);
            break;

        case 4:
            cout << "Thanks for visiting";
            break;

        default:
            cout << "Invalid choice";
    }
    }while(choice !=4);

    return 0;
}