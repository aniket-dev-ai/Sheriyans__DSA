#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the numbers of minutes : ";
    cin >> n;
    int hour = n / 60;
    int minutes = n % 60;
    cout << "Total Hours :";
    cout << hour;
    cout << " hours and ";
    cout << minutes;
    cout << " minutes";
    return 0;
}