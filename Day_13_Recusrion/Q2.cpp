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
int main()
{
    cout << sumN(5) << endl;
    return 0;
}