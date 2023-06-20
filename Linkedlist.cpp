//
// Created by Iftekharul Abedeen on 20/6/23.
//

#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){
    Node* head;
    Node* E1 = NULL;
    Node* E2 = NULL;

    head = new Node();
    E1 = new Node();
    E2 = new Node();

    head -> data = 1;
    E1 -> data = 2;
    E2 -> data = 3;

    head ->next = E1;
    E1 -> next = E2;

    Node* Cursor;
    Cursor = head;
    while(Cursor){
        cout << Cursor -> data << endl;
        Cursor = Cursor -> next;
    }
    return 0;
}