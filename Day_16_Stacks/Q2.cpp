// 4️⃣ Reverse a string using a stack.

// 👉 Problem: "hello" ka output "olleh" hona chahiye.

#include <iostream>
// #include <s/tack>
using namespace std;

class Stack{
    public:
    char arr[100];
    int top = -1;

    void push(char x){
        arr[++top] = x;
    }
    void pop(){
        top--;
    }
    bool isEmpty(){
        return top == -1;
    }
};

int ReverseString(string x){
    Stack st;
    for(char c : x){
        st.push(c);
    }
    while(!st.isEmpty()){
        cout << st.arr[st.top];
        st.pop();
    }
}

int main(){
    string s = "hello";
    ReverseString(s);
    return 0;
}