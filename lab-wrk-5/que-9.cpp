
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main(){

    int i, j ,k;

    for(i=5; i>=1; i--){

        for(j=1; j<=i; j++){
            cout << j << " ";
        }

        cout << endl;
    }

    for(i=1; i<=5; i++){

        for(j=1; j<=i; j++){
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}