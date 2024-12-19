#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the Value of a " << endl;
    cin >> a;
    cout << "Enter the Value of b " << endl;
    cin >> b;
    int c = 0;
    for(int i = (a > b ? a : b); i <= a * b; i++){ 
        if(i % a == 0 && i % b == 0){
            c = i;
            break;
        }
    }
    cout << "LCM of " << a << " and " << b << " is " << c << endl;
    return 0;
}