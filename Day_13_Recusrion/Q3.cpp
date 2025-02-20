#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (n >= 2)
        cout << 2 << " ";
    for (int i = 3; i <= n; i += 2)
    {
        if (checkPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}
