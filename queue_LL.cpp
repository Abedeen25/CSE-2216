//
// Created by Iftekharul Abedeen on 11/7/23.
//

#include <iostream>
using namespace std;

class Node{
public:
    int data;
    bool prune = false;
    Node* next;
};

void LL_insert_at_end(Node* head, int newData){
    if(head -> prune){
        head ->data = newData;
        head -> prune = false;
    }else{
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        Node* newNode = new Node();
        newNode -> data = newData;
        temp -> next = newNode;
    }

}

int LL_delete_node(Node* head){
    Node* temp = head -> next;
    head -> next = temp -> next;
    return temp -> data;
}

bool isEmpty(Node* QS){
    return (QS -> next == NULL);
}

void enQueue(Node** QS, int val){
    LL_insert_at_end(*QS, val);
}

int deQueue(Node* QS){
    if(!isEmpty(QS)){
        return LL_delete_node(QS);
    }
    cout << "The Queue is empty \n";
    return 0;

}

void peek(Node* QS){
    if(!isEmpty(QS)){
        Node* newNode = QS -> next;
        cout << "Top of the Queue is:" << newNode -> data << endl;
    }
    cout << "The Queue is empty";
}

int main(){

    Node* QueueStart= new Node();
    QueueStart -> prune = true;
    int control = 1;
    while(control){
        cout << "\n\nWhat to do?\n" << "1: enqueue\n" << "2: dequeue\n" << "3: peek\n" << "0: quit\n";
        cin >> control;

        if(control == 1){
            cout << "What to add? \n";
            int val;
            cin >> val;
            enQueue(&QueueStart, val);
        }else if(control == 2){
            int deQueueed = deQueue(QueueStart);
            cout << "You have got: " << deQueueed;
        }else if(control == 3 ){
            peek(QueueStart);
        }
    }

}