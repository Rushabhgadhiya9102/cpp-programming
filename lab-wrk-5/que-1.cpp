
//          1
//        2 1
//      3 2 1
//    4 3 2 1
//  5 4 3 2 1

#include <iostream>
using namespace std;

int main(){

    int i, j, k ;

   for( i=1; i<=5; i++){

    for(k=5; k>i; k--){
        cout << "  ";
    }

    for(j=i; j>=1; j--){

        cout << j << " ";
    }

    cout << endl;
   }

    return 0;
}