#include <iostream>
using namespace std;

void prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            return;
        }
    }
        cout << n << " is a prime number";
}

void evenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}
void factorial(int n)
{
    int c = 1;
    for (int i = n; i > 0; i--)
    {
        c *= i;
    }
    cout << c;
}

int main()
{
    cout << "1 = Check if a number is even or odd. 2 = Check if a number is prime. 3 = Calculate the factorial of a number. 4-infinite = Exit the program." << endl;
    int c;
    cin >> c;
    switch (c)
    {
    case 1:
    {
        int b;
        cout << "Enter a number";
        cin >> b;
        evenOrOdd(b);
        break;
    }
    case 2:
    {
        int b;
        cout << "Enter a number";
        cin >> b;
        prime(b);
        break;
    }
    case 3:
    {
        int b;
        cout << "Enter a number";
        cin >> b;
        factorial(b);
        break;
    }
    default:
    {
        break;
    }
    }
    return 0;
}