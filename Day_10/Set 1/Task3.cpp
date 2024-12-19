#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Score : ";
    cin >> num;
    if (num > 89)
    {
        cout << "A";
    }
    else if (num > 74 && num < 90)
    {
        cout << "B";
    }
    else if (num > 59 && num < 75)
    {
        cout << "C";
    }
    else if (num > 49 && num < 60)
    {
        cout << "D";
    }
    else if (num > 34 && num < 50)
    {
        cout << "E";
    }
    else
    {

        cout << "Fail";
    }
    return 0;
}