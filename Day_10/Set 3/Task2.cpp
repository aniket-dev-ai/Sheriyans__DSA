#include <iostream>
#include <vector>

void findFrequency(const std::vector<int>& arr) {
    std::vector<bool> visited(arr.size(), false);

    for (size_t i = 0; i < arr.size(); ++i) {
        if (visited[i]) {
            continue;
        }

        int count = 1;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        std::cout << "Element " << arr[i] << " occurs " << count << " times." << std::endl;
    }
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    findFrequency(arr);
    return 0;
}