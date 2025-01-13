#include <iostream>
using namespace std;

// fibonacci
void fibonacci(int a, int b, int c, int limit) {
    if (c == limit) return;
    cout << a + b << " ";
    fibonacci(b, a + b, c + 1, limit);
}

// sumOfn

int sumoFn(int n){
    if(n==0) return 0;
    int sum = sumoFn(n-1)+n;
    return sum; 
}

int main() {
    int n = 10;  
    // cout << 0 << " " << 1 << " ";
    // fibonacci(0, 1, 2, n); 
    cout<<sumoFn(n);
    return 0;
}
