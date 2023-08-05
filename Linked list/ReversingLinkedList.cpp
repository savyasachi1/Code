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
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *trav = head;
    while (trav != NULL)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
}

// void reverse(Node *&head)
// {
//     Node *curr = head->next;
//     Node *prev = head;
//     head->next = NULL;
//     Node *temp = NULL;
//     while (curr != NULL)
//     {
//         temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//     }
//     head = prev;
// }

void reverseNode(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    reverseNode(head, curr->next, curr);
    curr->next = prev;
}

void reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverseNode(head, curr, prev);
}

int main()
{
    Node *node1 = new Node(160);
    Node *head = node1;
    for (int i = 150; i > 0; i -= 10)
    {
        insertAtHead(head, i);
    }
    print(head);
    reverse(head);
    print(head);
}
