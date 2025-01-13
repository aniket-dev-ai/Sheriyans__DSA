#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// print vector
void print(vector<int> &arr, int i)
{
    if (i == arr.size())
        return;

    cout << arr[i] << " ";
    print(arr, i + 1);
}

// Find a value in array
bool find(vector<int> &arr, int i, int t)
{
    if (i == arr.size())
        return false;

    if (arr[i] == t)
        return true;

    find(arr, i + 1, t);
}

// Find Max
int max(vector<int> &arr, int i)
{

    if (i == arr.size() - 1)
    {
        return arr[i];
    }

    int maxRest = max(arr, i + 1);

    return (arr[i] > maxRest) ? arr[i] : maxRest;
}

int binaryFind(vector<int> &arr, int s, int e, int t)
{
    // Base case: when search space becomes invalid
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2; // Calculate mid safely to prevent overflow

    if (arr[mid] == t)
    { // Check if the target is at mid
        return mid;
    }
    else if (arr[mid] < t)
    { // Search in the right half
        return binaryFind(arr, mid + 1, e, t);
    }
    else
    { // Search in the left half
        return binaryFind(arr, s, mid - 1, t);
    }
}
int main()

{
    // vector<int> arr = {123, 234, 345, 2354, 5345, 456, 7234, 8345, 9346, 12430};
    // sort(arr.begin(), arr.end());
    // for (int i : arr)
    // {
    //     cout << i << endl;
    // }
    // int i = 0;
    // int t = 8;
    // int p = 2354;
    // print(arr, i);
    // cout << endl;
    // cout << find(arr, i, t) << endl;
    // cout << find(arr, i, p) << endl;
    // cout << max(arr, i) << endl;
    // cout << binaryFind(arr, 0, arr.size() - 1, p);


    
    return 0;
}