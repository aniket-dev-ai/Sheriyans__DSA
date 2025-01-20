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
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *reverseALinkedList(Node *&head)
{
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);

    print(head);

    return 0;
}