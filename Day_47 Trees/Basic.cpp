#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *createTree()
    {
        cout << "Enter data (-1 for no node): ";
        int val;
        cin >> val;

        if (val == -1)
        {
            return NULL;
        }
        else
        {
            Node *root = new Node(val);
            cout << "Enter left child of " << val << ": ";
            root->left = createTree();
            cout << "Enter right child of " << val << ": ";
            root->right = createTree();
            return root;
        }
    }
};

int main()
{
    Node *root = NULL;
    cout << "Creating tree...\n";
    root = root->createTree();
    cout << "Tree created successfully.\n"; 

    return 0;
}