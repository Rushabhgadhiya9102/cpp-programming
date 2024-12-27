#include <iostream>
using namespace std;

// TEMPLATE USING FOR LOOP

template <typename T1, typename T2>

class Collection {
  private:
    int size;
    T1*arr;

  public:
    int setData(int size) {
        this->size = size;
        arr = new T1[size];

        if(arr != NULL) {
            cout << "Array is successfully created..." << endl;
        } else {
            cout << "Array creation failed..." << endl;
        }
    }

    void getData() {
        cout << "Enter the Element : " << endl;
        for(int i = 0; i < size ; i++) {
            cin >> arr[i];
        }
    }

    void addItem(int index, T2 element) {
        if(index >= 0 && index < this->size) {
            arr[index] = element;
            cout << "Element added successfully!!" << endl;
        } else {
            cout << "Error !!" << endl;
        }
    }

    void displayData() {
        cout << "Collection is : " << endl;
        for(int i = 0; i < size ; i++) {
            cout << arr[i] << " ";
        }
    }

};

int main() {

    int size, element, index;

        cout << "Enter the size : ";
        cin >> size;

    Collection <int, int> int_array;

    int_array.setData(size);

    int_array.getData();

        cout << "Enter the index : ";
        cin >> index;

        cout << "Enter the Element : ";
        cin >> element;

    int_array.addItem(index, element);
    int_array.displayData();

    return 0;
}