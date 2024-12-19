#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter Second number" << endl;
    cin >> b;
    cout << "1 = Add 2 = Sub 3 = multiply 4 = divide" << endl;
    cin >> c;
    switch (c)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        if (b == 0)
            cout << "Invalid prompt idiot" << endl;

        cout << a / b;
        break;
    default:
        cout << "Invalid prompt idiot" << endl;
        break;
    }
    return 0;
}