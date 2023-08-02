#include<iostream>
using namespace std;

// Doubly linked list initiation
class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }

    ~Node(){
        int value = this-> data;
        this->prev = NULL;
        this->next = NULL;
        delete prev;
        delete next;
        cout<<"Deleted - "<<value<<endl;
    }

};


// Insertion at the start
void insertAtStart(Node*& head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head->prev = temp; 
    head = temp;
}

// Inserion at the tail
void insertAtEnd(Node*& tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Deletion of a node
void delNode(Node*& head, int position){
    if(position ==1){
        Node*temp = head;
        head = head-> next;
        delete temp;
    }
    else{
        Node* curr = NULL;
        Node* previous = NULL;
        Node* nextNode = head;

        int count=1;
        while(position!=count && nextNode != NULL){
            previous = curr;
            curr = nextNode;
            nextNode = nextNode -> next;

            count++;
        }
        previous->next = curr->next;
        nextNode->prev = previous;
        delete curr;

    }
}

// Printing full linked list
void print(Node*& head){
    Node* temp = head;
    //int count=1;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
       // count++;
    }
    cout<<endl;
}

// Printing linked list in reverse
void revprint(Node*& tail){
    Node *temp= tail;
    // int count=1;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp-> prev;
    } 
    cout<<endl;
}

// Inserion at any place
void insertAtAnyplace(Node*&tail, Node*& head, int d, int position){
    if(position==1){
        insertAtStart(head, d);
        return;
    }
    Node* temp = new Node(d);
    Node* trav = head;
    int count=1;
    while(count!=position-1 && trav!=NULL){
        trav=trav->next;
        count++;
    }
    temp->prev = trav;
    // cout<<(temp->prev)->data<<"at" <<endl;
    if(trav->next == NULL){
        tail = temp;
    }
    temp-> next = trav->next;
    trav -> next = temp;

}

int main(){
    Node* node1 = new Node(100);
    Node* head = node1;
    Node* tail = node1;
    insertAtStart(head, 50);
    insertAtStart(head, 40);
    insertAtStart(head, 30);
    insertAtEnd(tail, 60);
    insertAtEnd(tail, 70);
    insertAtEnd(tail, 80);
    insertAtAnyplace(tail, head, 25, 1);
    insertAtAnyplace(tail, head, 125, 9);
    print(head);
    // delNode(head, 4);
    print(head);
    print(tail);

}

