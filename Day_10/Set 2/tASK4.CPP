#include <iostream>
using namespace std;

void even(int a);
void odd(int a);

void odd(int a)
{
    if (a == 1)
    {
        return;
    }
    int c = (3 * a) + 1;

    cout << " " << c << " ";
    if (c % 2 == 0)
    {
        return even(c);
    }
    if (c % 2 != 0)
    {
        return odd(c);
    }
    return;
}

void even(int a)
{

    int c = a / 2;
    if (a == 1)
    {
        return;
    }
    cout << " " << c << " ";
    if (c % 2 == 0)
    {
        return even(c);
    }
    if (c % 2 != 0)
    {
        return odd(c);
    }
    return;
}

int main()
{
    int c;
    cin >> c;
    if (c % 2 == 0)
    {
        even(c);
    }
    if (c % 2 != 0)
    {
        odd(c);
    }

    return 0;
}