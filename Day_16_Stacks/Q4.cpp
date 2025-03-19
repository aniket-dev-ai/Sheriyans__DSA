// 6️⃣ Find next greater element for each element.

// 👉 Problem: Array = [4, 5, 2, 10] → Next Greater = [5, 10, 10, -1]

#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int arr[], int n) {
    stack<int> s;
    int res[n];
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) s.pop();
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for (int x : res) cout << x << " ";
}

int main() {
    int arr[] = {4, 5, 2, 10};
    int n = 4;
    nextGreater(arr, n);
    return 0;
}
