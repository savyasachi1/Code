#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data= d;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*& head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void print(Node*& head){
    Node* trav = head;
    while(trav!= NULL){
        cout<<trav -> data<<" ";
        trav = trav -> next;
    }
    cout<<endl;
}

void reverse(Node*& head){
    Node* curr = head;
    Node* temp = NULL;
    // Node* prev = head;
    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr-> next;
        curr-> next = temp;
        curr = curr->prev;
    }
    head = temp -> prev;
}

int main(){
    Node* node1 = new Node(100);
    Node* head = node1;
    for(int i = 90; i>=0;i-=10){
        insertAtHead(head, i);
    }
    print(head);
    reverse(head);
    // cout<<"1";
    print(head);
}