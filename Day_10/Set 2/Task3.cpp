#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the Value of a " << endl;
    cin >> a;
    cout << "Enter the Value of b " << endl;
    cin >> b;
    int c;
    for (int i = (a > b ? b : a); i > 0; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}