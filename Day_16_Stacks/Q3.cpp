// 5️⃣ Check for balanced parentheses.

// 👉 Problem: "({[()]})" is Balanced but "({[)]}" is Unbalanced.

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;
    for (char ch : expr)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            char top = s.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '['))

                s.pop();
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    string expr = "({[()]})";

    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    expr = "({[)]}";
    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}