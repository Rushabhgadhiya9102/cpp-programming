
//          5
//        4 5
//      3 4 5
//    2 3 4 5
//  1 2 3 4 5

#include <iostream>
using namespace std;

int main(){

    int i, j, k;

    for(i=5 ; i>=1; i--){

        for(k=i; k>=1 ; k--){
            cout << "  ";
        }

        for(j=i; j<=5; j++){

            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}