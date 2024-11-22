// CREATE A PROGRAM TO PRINT THE LEAP YEAR

#include <iostream>
using namespace std;

int main(){

    int i, start, end;

    cout << "enter the start: " ;
    cin >> start;

    cout << "enter the end: " ;
    cin >> end;

    for(i = start; i<=end; i++){
        
        if(i % 4 == 0){
            cout << i << endl;
        }
    }

    return 0;
}