#include <iostream>
using namespace std;

// Doubly linked list initiation
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        this->prev = NULL;
        this->next = NULL;
        delete prev;
        delete next;
        cout << "Deleted - " << value << endl;
    }
};

// Insertion at the start
void insertAtStart(Node* &tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Inserion at the tail
void insertAtEnd(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Deletion of a node
void delNode(Node*& tail, Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *curr = NULL;
        Node *previous = NULL;
        Node *nextNode = head;

        int count = 1;
        while (position != count && nextNode != NULL)
        {
            previous = curr;
            curr = nextNode;
            nextNode = nextNode->next;

            count++;
        }
        if (curr->next == NULL)
        {
            tail = previous;
        }
        previous->next = curr->next;
        nextNode->prev = previous;
        delete curr;
    }
}

// Printing full linked list
void print(Node *&head)
{
    Node *temp = head;
    // int count=1;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        // count++;
    }
    cout << endl;
}

// Printing linked list in reverse
void revPrint(Node *&tail)
{
    Node *temp = tail;
    // int count=1;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// Inserion at any place
void insertAtAnyplace(Node *&tail, Node *&head, int d, int position)
{
    if (position == 1)
    {
        insertAtStart(tail, head, d);
        return;
    }
    Node *temp = new Node(d);
    Node *trav = head;
    int count = 1;
    while (count != position - 1 && trav != NULL)
    {
        trav = trav->next;
        count++;
    }
    if (trav->next == NULL)
    {
        insertAtEnd(head, tail, d );
        tail = temp;
        return;
    }
    temp->next = trav->next;
    trav->next-> prev = temp;
    trav -> next =temp;
    temp->prev = trav;
    
}

int main()
{
    Node *node1 = new Node(100);
    Node *head = node1;
    Node *tail = node1;
    insertAtStart(tail, head, 50);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtStart(tail, head, 40);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtStart(tail, head, 30);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    revPrint(tail);
    insertAtEnd(head, tail, 60);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtEnd(head, tail, 70);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtEnd(head, tail, 80);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtAnyplace(tail, head, 25, 1);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    insertAtAnyplace(tail, head, 125, 9);
    print(head);
    delNode(tail, head, 9);
    cout<<tail->data<<endl<<head->data<<endl;
    print(head);
    revPrint(tail);
}
