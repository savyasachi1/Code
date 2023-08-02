#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        this->next = NULL;
        delete next;
        cout << "Deleted - " << value << endl;
    }
};

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->next = head;
    tail = temp;
}
void insertAtHead(Node*& tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    tail->next= head;
}

void print(Node *&head)
{
    Node *temp = head;
    int count = 1;
    do {
        cout << temp->data << " ";
        temp = temp->next;
        // count++;
    }while (head != temp->next);
    
    cout <<temp->data<< endl;
}

void insertNode(Node *&head, int d, int f)
{
    Node *temp = new Node(d);
    Node *trav = head;
    while (trav->data != f)
    {
        trav = trav->next;
    }
    temp->next = trav->next;
    trav->next = temp;
}

void deletion(Node*& head, int d){
    Node* temp = head;
    Node* prev = NULL;
    while(temp->data!= d){
        prev = temp;
        temp=temp->next;
    }
    prev -> next = temp -> next;
    delete temp;
}

int main()
{
    Node *node1 = new Node(100);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(head, tail, 150);
    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 250);
    insertAtTail(head, tail, 300);
    insertAtTail(head, tail, 350);
    insertAtTail(head, tail, 400);
    insertAtTail(head, tail, 450);
    insertAtHead(tail, head, 50);
    insertNode(head, 500, 450);
    print(head);
    deletion(head, 300);
    print(head);
}