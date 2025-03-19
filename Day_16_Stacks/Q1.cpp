// 1️⃣ Implement a stack using an array.

// 👉 Problem: Stack ko ek array ka use karke implement karna hai.

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size, top;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int x)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(8);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(8);
    s.push(9);
    s.print();
    cout << s.getTop() << endl;
    s.pop();
    s.print();
    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.print();
    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.print();
    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.print();
    cout << s.getTop() << endl;
    cout << s.getSize() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}
