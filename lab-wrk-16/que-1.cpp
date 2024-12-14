#include <iostream>
using namespace std;

int sum(int a){

    int num, arr[a], sum;

    for(i=0;i<a;i++){
        cout << "enter the number: ";
        cin >> arr[i];
    }

    for(i=0;i<a;i++){
        sum += i;
    }

    cout << sum;

}

int main(){

    int size;

    cout << "enter the size: ";
    

    return 0;
}