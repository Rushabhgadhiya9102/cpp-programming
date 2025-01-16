// FIND ALL NEGATIVE ELEMENT FROM THE GIVEN ARRAY

#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter size of array:";
    cin >> size;

    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter array element: arr[" << i << "]= ";
        cin >> arr[i];
    }

    cout << "Negative elements of the array are:";
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            cout << " " << arr[i] << "  ";
        }
    }

    return 0;
}