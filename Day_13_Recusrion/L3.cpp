#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// check if array is sorted or not

void checks(vector<int> &arr, int i)
{
    if (i == arr.size() - 2 && arr[i] > arr[i + 1])
    {
        cout << "Unsorted";
    }
    else if (i == arr.size() - 2 && arr[i] < arr[i + 1])
    {
        cout << "Sorted";
    }
    else if (arr[i] > arr[i + 1])
    {
        cout << "Unsorted";
    }
    else if (arr[i] < arr[i + 1])
    {
        checks(arr, i + 1);
    }
}

void palstir(string s, int i)
{
    if (i == (s.length()) / 2)
    {
        cout << "yes" << endl;
        return;
    }

    if (s[i] != s[s.length() - 1 - i])
    {
        cout << "not" << endl;
    }
    else if (s[i] == s[s.length() - 1 - i])
    {
        return palstir(s, i + 1);
    }
}

int main()
{
    // vector<int> arr = {23, 5, 78, 12, 90, 34, 56, 11, 7, 42,
    //                    67, 89, 15, 3, 50, 31, 99, 25, 8, 62};
    // checks(arr, 0);
    // sort(arr.begin(), arr.end());
    // cout<<endl;
    // checks(arr, 0);

    palstir("racecar", 0);
    palstir("racecawr", 0);

    return 0;
}