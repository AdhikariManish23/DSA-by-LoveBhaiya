#include <iostream>
#include <vector>

int findMaxAdjacentDifference(const std::vector<int>& arr) {
    if (arr.size() < 2) {
        // Not enough elements to find a difference.
        return 0;
    }

    int maxDifference = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        int difference = std::abs(arr[i] - arr[i - 1]);
        maxDifference = std::max(maxDifference, difference);
    }

    return maxDifference;
}

int main() {
    std::vector<int> arr = {2, 9, 7, 5, 3, 4};
    int maxDiff = findMaxAdjacentDifference(arr);

    std::cout << "Maximum adjacent difference: " << maxDiff << std::endl;

    return 0;
}