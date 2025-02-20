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
    if (n <= 0)
        return 0;

    return ((n % 10) + SumOfDigit(n / 10));
}

int Reverse(int n, int c)
{
    if (n == 0)
    {
        return c;
    }
    c = c * 10 + n % 10;
    return Reverse(n / 10, c);
}
int a = 0, b = 1;
void fibonacci(int n)
{
    if (n == 0)
        return;
    int c = a + b;
    a = b;
    b = c;
    cout << c << " ";

    fibonacci(n - 1);
}

int fibser(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibser(n - 1) + fibser(n - 2);
}

int GCD(int a, int b)
{
    cout << a << " " << b << " " << endl;
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

int GCD2(int a, int b)
{

    cout << a << " " << b << " " << endl;
    if (a == b)
    {
        return b;
    }
    if (a > b)
        return GCD2(a - b, b);

    return GCD2(a, b - a);
}

void factor(int a, int n)
{
    if (n > a / 2)
    {
        cout << a << endl;
        return;
    }
    if (a % n == 0)
        cout << n << endl;
    return factor(a, n + 1);
}
int main()
{
    // cout << GCD(32, 88 );
    // cout <<"Result = "<< GCD2(32, 88);
    // cout << sumN(5) << endl;
    // cout << SumOfDigit(7896) << endl;
    // int d = Reverse(6789, 0);
    // cout << d << endl;
    // cout<<a<<" "<<b<<" ";
    // fibonacci(10);
    // cout<<fibser(10)<<endl;
    // factor(50, 1);
    
    for(int i = 1 ; i<=30/2;i++){
        if(900%i==0){
            cout<<i<<endl<<900/i<<endl;
        }
    }
}