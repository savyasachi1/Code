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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << " Memory free for value - " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    // temp -> next = NULL;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        cout << count << "->" << temp->data << "  ";
        temp = temp->next;
        count++;
    }
    cout << endl;
}

void insertAtMiddle(Node *&tail, Node *&head, int data, int place)
{
    if (place == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = new Node(data);
    Node *trav = head;
    int count = 1;

    while (count != place - 1 && trav->next != NULL)
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

void deleteNode(Node *&tail, Node *&head, int place)
{

    if (place == 1)
    {
        Node *dele = head;
        head = head->next;
        delete dele;
        return;
    }
    else
    {
        Node *del = NULL;
        Node *temp = head;
        int count = 1;
        while (count < place && temp->next != NULL)
        {
            del = temp;
            temp = temp->next;
            count++;
        }
        del->next = temp->next;
        if (temp->next == NULL)
            tail = del;
        delete temp;
    }
}

int main()
{
    // cout<<"Hello World!";
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    insertAtHead(head, 5);
    // print(head);
    Node *tail = node1;
    insertAtTail(tail, 15);
    insertAtTail(tail, 25);
    insertAtTail(tail, 30);
    insertAtTail(tail, 35);
    insertAtMiddle(tail, head, 20, 4);
    insertAtMiddle(tail, head, 21, 5);
    insertAtMiddle(tail, head, 22, 6);
    insertAtMiddle(tail, head, 4, 1);
    insertAtMiddle(tail, head, 3, 1);
    insertAtMiddle(tail, head, 2, 1);
    insertAtMiddle(tail, head, 1, 1);
    print(head);
    cout << endl;
    deleteNode(tail, head, 13);
    deleteNode(tail, head, 12);
    deleteNode(tail, head, 11);
    deleteNode(tail, head, 1);
    deleteNode(tail, head, 5);
    cout << endl;
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}