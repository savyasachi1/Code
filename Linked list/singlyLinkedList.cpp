#include <iostream>
using namespace std;

// Node creation inside a class
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

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
        cout << "Deleted- " << value << endl;
    }
};

// Insersion of a node at start
void insertAtStart(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Printing the full linked list
void print(Node *&head)
{
    Node *temp = head;
    // int count=1;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insersion of a node at end
void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Insersion at anywhere in the linked list
void insertAtAnywhere(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtStart(head, d);
        return;
    }
    Node *trav = head;
    Node *temp = new Node(d);
    int count = 1;
    while (count < position - 1 && trav != NULL)
    {
        trav = trav->next;
        count++;
    }
    if (trav->next == NULL)
    {
        tail = temp;
    }
    temp->next = trav->next;
    trav->next = temp;
}

// Deletion of a Node
void delNode(Node *&tail, Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int count = 1;
        while (count != position && curr != NULL)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        delete curr;
    }
}

int main()
{

    // first Node creation// initiation
    Node *node1 = new Node(100);
    Node *head = node1;
    Node *tail = node1;
    insertAtStart(head, 50);
    insertAtEnd(tail, 150);
    insertAtAnywhere(tail, head, 2, 75);
    insertAtAnywhere(tail, head, 1, 25);
    insertAtAnywhere(tail, head, 5, 125);
    insertAtAnywhere(tail, head, 7, 175);

    print(head);
    cout << endl;
    delNode(tail, head, 7);
    delNode(tail, head, 1);
    delNode(tail, head, 4);
    delNode(tail, head, 2);
    print(head);
    cout << "Head- " << head->data << endl;
    cout << "Tail- " << tail->data << endl;
}