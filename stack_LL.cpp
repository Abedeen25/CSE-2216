//
// Created by Iftekharul Abedeen on 11/7/23.
//

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void LL_insert_to_beginning(Node** head,int newData){ //One without assignment needed
    Node* newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head;
    *head = newNode;
}

int LL_delete_node(Node** head){
    Node* temp = *head;
    *head = temp -> next;
    return temp -> data;
}

bool isEmpty(Node* ST){
    return (ST -> next == NULL);
}

void push(Node** ST, int val){
    LL_insert_to_beginning(ST, val);
}

int pop(Node** ST){
    if(!isEmpty(*ST)){
        return LL_delete_node(ST);
    }
    cout << "The Stack is empty \n";
    return 0;

}

void peek(Node** ST){
    Node* newNode = *ST;
    cout << "Top of the Stack is:" << newNode -> data << endl;
}

int main(){

    Node* StackTop = new Node;
    StackTop -> data = -99;
    StackTop -> next = NULL;

    int control = 1;
    while(control){
        cout << "\n\nWhat to do?\n" << "1: push\n" << "2: pop\n" << "3: peek\n" << "0: quit\n";
        cin >> control;

        if(control == 1){
            cout << "What to push? \n";
            int val;
            cin >> val;
            push(&StackTop, val);
        }else if(control == 2){
            int poped = pop(&StackTop);
            cout << "You have popped: " << poped;
        }else if(control == 3){
            peek(&StackTop);
        }
    }

}