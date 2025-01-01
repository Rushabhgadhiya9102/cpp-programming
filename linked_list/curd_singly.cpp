#include <iostream>
using namespace std;

// CLASS CREATED

class Node{
    public:
        int data:
        Node *next;

        Node (int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

class LinkedList{
    public:
        Node *head;
        int count;

        LinkedList(){
            this -> head = NULL;
            count = 0;
        }

        void addAtBeginning(int data){
            Node *newNode = new Node(data);
            newNode ->next = this->head;
            this -> head = newNode;
            this -> count++;
        }

        void addAtEnd(int data){
            Node *newNode = new Node(data);
            if(this->head == NULL){
                this->head = newNode;
            }else{
                Node *ptr = this -> head;
                while(ptr->next!=NULL){
                    ptr = ptr -> next;
                }
                ptr -> next = newNode;
            }
            this->count++;
        }

        void addAtPosition(int data, int position){
            Node *newNode = new Node(data);

            if(position == 0){
                newNode -> next = this->head;
                this->head = newNode;
            }else{
                Node *ptr = head;
            }
        }
};