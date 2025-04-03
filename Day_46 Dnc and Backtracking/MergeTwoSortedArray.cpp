#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted arrays

void mergetwosortedarray(int arr1[], int arr2[], int n, int m, vector<int> &ans)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while (j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    while (i < n)
    {
        ans.push_back(arr1[i]);
        i++;
    }
}

int main()
{

    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10,11,12,13,14,15};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> ans;
    mergetwosortedarray(arr1, arr2, n, m, ans);
    cout << "Merged array: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
