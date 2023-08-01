#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};

void insertAtHead(Node *head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head =temp; 
}

void print(Node* head){
    Node* temp = head;
    while (temp!=NULL){
        cout<<temp-> data<<" ";
        temp = temp-> next;
    }
}

int main()
{
    // cout<<"Hello World!";
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}