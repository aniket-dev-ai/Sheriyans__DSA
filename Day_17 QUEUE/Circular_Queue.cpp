#include <iostream>
using namespace std;

#define SIZE 5

class circularcircular_queue
{
    int items[SIZE], front, rear;

public:
    circularcircular_queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        if (front == rear + 1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    void enqueue(int element)
    {
        if (isFull())
        {
            cout << "circular_queue is full!" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            cout << element << " inserted into circular_queue" << endl;
        }
    }
    void decircular_queue()
    {
        if (isEmpty())
        {
            cout << "circular_queue is empty!" << endl;
        }
        else
        {
            cout << items[front] << " removed from circular_queue" << endl;
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % SIZE;
            }
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "circular_queue is empty!" << endl;
        }
        else
        {
            cout << "circular_queue elements: ";
            if (rear >= front)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << items[i] << " ";
                }
            }
            else
            {
                for (int i = front; i < SIZE; i++)
                {
                    cout << items[i] << " ";
                }
                for (int i = 0; i <= rear; i++)
                {
                    cout << items[i] << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    circularcircular_queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.decircular_queue();
    q.decircular_queue();
    q.display();
    q.enqueue(6);
    q.display();
    q.enqueue(7);
    q.display();
    return 0;
}