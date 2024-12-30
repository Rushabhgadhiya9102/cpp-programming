#include <iostream>
#include <vector>
using namespace std;

class Collection{

    vector<int> v1;
    public:
        void addElement(int element){
            v1.push_back(element);
            cout << "Element added successsfully!!!" << endl;
        }

        void updateElement(int index, int element){
            if(index >= 0 && index<v1.size()){
                v1[index] = element;
                cout << "Element update successfully!!!" << endl;
            }
        }else {
            cout << "Error !!!" << endl;
        }

        void getAllelements(){
            cout << "Vector is : " << endl;
            for(int i = 0; i<v1.size(); i++){
                cout << v1[i] << " ";
            }
            cout << endl;
        }

};

int main(){

    Collection obj;

    int choice;

    do{
        cout << "Press 1 for add an element" << endl
             << "Press 2 for update an element" << endl
             << "Press 3 for delete an element" << endl
             << "Press 4 for view all element" << endl
             << "Press 5 for exit" << endl;

        cout << "Enter your choice!!" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                break;
        }     
    }
    while(choice !=0);

    return 0;
}