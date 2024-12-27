#include <iostream>
using namespace std;

class myClass{

    private:
        int *arr;
        int size;

    public:
        myClass(int size){
            this->size = size;
            arr = new int (this->size);
            if(arr == NULL)
            {
                cout << "Memory allocation is failed !!!" << endl;
            }
            else 
            {
                cout << "Memory allocation is successful!!!" << endl;
            }
        }    

        ~myClass (){
            delete[] arr;
            arr = NULL;
            if(arr == NULL){
                cout << "Memory deallocation is successfull !!" << endl;
            }
        }

        void addElement (int index, int element){
            if(index == 0 && index<this->size){
                this->arr[index] = element;
                cout << "ELement added seccessfully" << endl;
            }
            else{
                cout << "Error...." << endl;
            }
        }

} ;

int main (){

    myClass obj(5);
    obj.addElement(0,99);

    return 0;
}