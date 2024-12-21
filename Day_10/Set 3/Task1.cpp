
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

const int arraySize = 30;
int arr[arraySize];

int main()
{
    srand(time(0));
    for (int i = 0; i < arraySize; ++i)
    {
        arr[i] = rand() % 2;
    }
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    int c = 0;
    int d = 0;
    cout << endl;
    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] == 1)
        {
            c++;
            if (c > d)
            {
                d = c;
            }t
        }
        else
        {
            c = 0;
        }
    }
    cout << d;
    return 0;
}