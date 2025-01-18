#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// Insertion at head
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    Node *newNode = new Node(value);

    // If the list is empty, make the new node both head and tail
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // If the list is not empty, insert at the head
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    return head; // Return the updated head
}

// Print the list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << endl;
}

Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    Node *newNode = new Node(value);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Inserting nodes at the head
    head = insertAtHead(10, head, tail);
    head = insertAtHead(20, head, tail);
    head = insertAtHead(30, head, tail);

    // Print the list
    print(head);
    printReverse(tail);
    insertAtTail(40, head, tail);
    print(head);
    return 0;
}
