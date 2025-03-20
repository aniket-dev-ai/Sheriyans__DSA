#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
    Node *front, *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return front == NULL;
    }
    void enqueue(int data)
    {
        Node *temp = new Node(data);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
    void print()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();
    cout << q.peek() << endl;
    q.dequeue();
    q.print();
    cout << q.peek() << endl;
    q.dequeue();
    q.print();
    cout << q.peek() << endl;
    q.dequeue();
    q.print();
    cout << q.peek() << endl;
    q.dequeue();
    q.print();
    cout << q.peek() << endl;
    return 0;
}