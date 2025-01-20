#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            top--; // Simply decrease top to pop the element
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int getTop()
    {
        return top >= 0 ? arr[top] : -1;
    }

    void print()
    {
        cout << "Printing Stack: ";
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++) // Print only the valid elements
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s(10);
    s.print(); // Printing an empty stack
    s.push(5);
    s.push(10);
    s.push(15);
    s.print(); // Printing stack after adding elements
    s.pop();
    s.print(); // Printing stack after popping an element
    return 0;
}
