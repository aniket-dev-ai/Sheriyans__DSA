#include <iostream>
using namespace std;

int main()
{
    string name, favColor, city;
    string age;
    cout << "Enter your name";
    cin >> name;
    cout << endl;
    cout << "Enter your Age";
    cin >> age;
    cout << endl;
    cout << "Enter Your Favourite Color";
    cin >> favColor;
    cout << endl;
    cout << "Enter Your City";
    cin >> city;
    cout << endl;

    cout << "Hello " + name + "!You are " + age + " years old , your favourite color is " + favColor + ", and you live in " + city;

    return 0;
}