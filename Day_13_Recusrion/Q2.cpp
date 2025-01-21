#include <iostream>
using namespace std;

int sumN(int n)
{
    if (n == 1)
    {
        return n;
    }

    return n + sumN(n - 1);
}

int SumOfDigit(int n)
{
    if (n <= 0 )
        return 0;

    return ((n % 10) + SumOfDigit(n / 10));
}
int main()
{
    cout << sumN(5) << endl;
    cout << SumOfDigit(7896) << endl;
    return 0;
}