#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Value of n";
    cin >> n;
    int a = 0, b = 1;
    cout << a << "  " << b;
    for (int i = 0; i < n - 1; i++)
    {
        int c = a + b;
        int temp = b;
        b = c;
        a = temp;
        cout << " " << c;
    }
    return 0;
}