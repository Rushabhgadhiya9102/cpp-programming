//transpose of matrix
#include <iostream>
using namespace std;

int main() {
    int row, col;
    int arr[10][10]; 

    cout << "Enter array row size: ";
    cin >> row;
    cout << "Enter array column size: ";
    cin >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    cout << "The original matrix is:\n";
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            cout << " " << arr[i][j] << " "; 
        }
        cout << endl;
    }


    cout << "The transpose of the matrix is:\n";
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            cout << " " << arr[j][i] << " "; 
        }
        cout << endl;
    }

    return 0;
}