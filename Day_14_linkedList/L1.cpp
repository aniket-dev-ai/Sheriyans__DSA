#include <iostream>
using namespace std;

// Linked list ka basic structure define kar rahe hain
class Node
{
public:
    int data;   // Node ke andar data ko store karne ke liye variable
    Node *next; // Next pointer jo next node ka address store karega

    // Constructor: Jab bhi naye node ka object banate hain, yeh run hota hai
    Node(int value)
    {
        this->data = value; // Node ka data set karte hain
        this->next = NULL;  // Next pointer ko initially NULL set karte hain
    }
};

// Yeh function linked list ke head par naye node insert karega
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // Agar linked list abhi empty hai (head aur tail dono NULL hain)
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value); // Naya node banate hain aur uska data set karte hain
        head = newNode;                  // Head ko naye node pr point karte hain
        tail = newNode;                  // Tail bhi naye node pr point karega (kyunki sirf ek hi node hai)
    }
    else
    {
        Node *newNode = new Node(value); // Ek naya node banate hain aur uska data set karte hain
        newNode->next = head;            // Naya node ab existing head node ke address pr point karega
        head = newNode;                  // Head ko naye node par update karte hain
    }

    return head; // Updated head ko return karte hain
}

// Yeh function linked list ke sare nodes ka data print karega
void print(Node *head)
{
    Node *temp = head;   // Temporary pointer ko head pr set karte hain
    while (temp != NULL) // Jab tak pointer NULL na ho (matlab list ka end na aaye)
    {
        cout << temp->data << " "; // Current node ka data print karte hain
        temp = temp->next;         // Pointer ko next node pr move karte hain
    }
    cout << endl; // Line change karte hain for better output formatting
}

int getLength(Node *head)
{

    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *insertAtPosition(int position, int value, Node *head, Node *tail)
{
    Node *newNode = new Node(value);
    
    // Handle inserting at the head
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node *temp = head;
    int count = 1;

    // Traverse to find the position
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Check if position is valid
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return head;
    }

    // Insert the node at the position
    newNode->next = temp->next;
    temp->next = newNode;

    // If inserting at the tail, update the tail pointer
    if (newNode->next == NULL)
    {
        tail = newNode;
    }

    return head;
}

bool linearSearch(int value,Node *head){
    Node *temp = head;
    while(temp != NULL){
        if(temp -> data == value){
            return true;
        }
        temp = temp->next;
    }
    return false; 
}

// Program execution yahan se start hota hai
int main()
{
    Node *head = NULL; // Linked list ka head initially NULL hai
    Node *tail = NULL; // Linked list ka tail initially NULL hai

    head = insertAtHead(10, head, tail); // 10 ko linked list ke head pr insert karte hain
    head = insertAtHead(20, head, tail); // 20 ko head pr insert karte hain
    head = insertAtHead(30, head, tail); // 30 ko head pr insert karte hain

    // print(head); // Linked list ko print karte hain

    cout << getLength(head)<<endl;
    insertAtPosition(3,420,head,tail);
    print(head);

    cout<<linearSearch(20,head);
    cout<<endl;
    cout<<linearSearch(120,head);

    return 0; // Program successful run hone ke baad return 0 karte hain
}
