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
    if (n == 0){
        return c;}
    c = c * 10 + n % 10;
    return Reverse(n / 10, c);
}
int a = 0 , b = 1 ;
void fibonacci(int n){
    if(n==0 ) return;
int c = a+b;
 a = b ; 
 b = c ;
 cout<<c<<" ";

 fibonacci(n-1);
}

int fibser(int n ){
    if(n==0 || n==1) return n;
    return fibser(n-1 ) + fibser(n-2 ); 
}

int main()
{
    // cout << sumN(5) << endl;
    // cout << SumOfDigit(7896) << endl;
    // int d = Reverse(6789, 0);
    // cout << d << endl;
    // cout<<a<<" "<<b<<" ";
    // fibonacci(10);
    cout<<fibser(10)<<endl;
}