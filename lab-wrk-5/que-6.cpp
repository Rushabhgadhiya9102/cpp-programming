
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include <iostream>
using namespace std;

int main(){

    int i, j, k;

    for(i=1 ;i<=5; i++){

        for(k=1; k<=i; k++){
            cout << "  ";
        }

        for(j=5; j>=i; j--){

            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}