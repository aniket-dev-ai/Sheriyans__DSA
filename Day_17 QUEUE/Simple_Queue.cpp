#include <iostream>
using namespace std;

#define SIZE 5 // Queue ka fixed size

class Queue
{
    int items[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (rear == SIZE - 1);
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1)
            front = 0;
        items[++rear] = value;
        cout << value << " inserted into queue\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << items[front++] << " removed from queue\n";
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << items[i] << " ";
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
