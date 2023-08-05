#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next =NULL;
    }
};

void insertAtHead(Node*& head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head =temp;
}

void print(Node*& head){
    Node* trav = head;
    while(trav!=NULL){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    cout<<endl;
}

void reverseInKGroup(Node* &head, int k){
    Node* curr = head;
    Node* prev = NULL;
}

int main(){
    Node* node1 = new Node(100);
    Node* head = node1;
    for( int i= 90;i>0;i-=10){
        insertAtHead(head, i);
    }
    print(head);
}