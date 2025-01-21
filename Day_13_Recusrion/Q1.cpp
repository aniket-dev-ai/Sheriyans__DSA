#include <iostream>
using namespace std;

void PrintHello(int n ){
    if(n==0)return;
    int c = 11;
    cout<<"Hello World "<<c-n<<endl;
    n--;
    return PrintHello(n);
}

void printCount(int n){
    if(n==0) return;
    printCount(n-1);
    cout<<n<<endl;
}

int main() {
    // PrintHello(10);
    printCount(10);
    return 0;
}