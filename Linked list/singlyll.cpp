#include <iostream>
using namespace std;

class Node{    
    public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp -> data <<" ";
        temp= temp -> next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    
    // If at head
    if (position ==0){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt =1;
    while(cnt<position-1){
        temp= temp -> next;
        cnt++;
    }
    if (temp-> next == NULL){
        
    }
    Node*  nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 

}

int main()
{
    Node *node1 = new Node(40);
    // Node *node2 = new Node(20);
    Node* head = node1;
    Node* tail = node1;
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;
    // cout<<node2 -> data<<endl;
    // cout<<node2 -> next<<endl;
    print(head);
    insertAtHead(head, 30);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtHead(head, 10);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    print(head);
    insertAtPosition(tail,head, 1, 15);
    insertAtPosition(tail,head, 4, 25);
    insertAtPosition(tail,head, 6, 35);
    insertAtPosition(tail,head, 8, 45);
    insertAtPosition(tail,head, 10, 55);
    insertAtPosition(tail,head, 12, 65);
    insertAtPosition(tail,head, 0, 5);
    insertAtTail(tail, 70);
    print(head);

}
