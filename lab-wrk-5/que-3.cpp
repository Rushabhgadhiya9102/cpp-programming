
//          5
//        4 4
//      3 3 3
//    2 2 2 2
//  1 1 1 1 1

#include <iostream>
using namespace std;

int main(){

    int i, j, k;

    for(i=5 ; i>=1; i--){

        for(k=i; k>=1 ; k--){
            cout << "  ";
        }

        for(j=i; j<=5; j++){

            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}