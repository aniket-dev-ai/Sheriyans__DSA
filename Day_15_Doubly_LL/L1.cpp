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

void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
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

int getLength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *insertAtPosition(int position, int value, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        insertAtHead(value, head, tail);
    }
    else if (position == getLength(head))
    {
        insertAtTail(value, head, tail);
    }
    else
    {
        int c = 0;
        Node *temp = head;
        Node *forward = head;
        while (c < position - 2)
        {
            c++;
            temp = temp->next;
        }
        Node *newNode = new Node(value);
        forward = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        forward->prev = newNode;
        newNode->next = forward;
    }
    return head;
}

bool search(int target, Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node *deletionFromPosition(int position, Node *&head, Node *&tail)
{
    if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        int c = 1;
        while(c<position-1){
            temp = temp->next;
            c++;
        }
        temp->prev->next = temp->next;
        temp->next = temp->prev;
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Inserting nodes at the head
    head = insertAtHead(30, head, tail);
    head = insertAtHead(20, head, tail);
    head = insertAtHead(10, head, tail);

    // Print the list
    // print(head);
    // printReverse(tail);
    cout << getLength(head) << endl;
    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);
    insertAtTail(60, head, tail);
    // print(head);
    // printReverse(tail);
    cout << getLength(head) << endl;
    insertAtPosition(3, 200, head, tail);
    print(head);
    cout << search(50, head) << endl;
    cout << search(500, head) << endl;
    deletionFromPosition(3,head,tail);
    print(head);
    return 0;
}
