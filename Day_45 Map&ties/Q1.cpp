#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

void printFrequency(const vector<int> &arr)
{
    map<int, int> frequencyMap;
 
    for (int num : arr)
    {
        frequencyMap[num]++;
    }
 
    for (const auto &pair : frequencyMap)
    {
        cout << "Number " << pair.first << " appears " << pair.second << " times." << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    printFrequency(arr);
    return 0;
}