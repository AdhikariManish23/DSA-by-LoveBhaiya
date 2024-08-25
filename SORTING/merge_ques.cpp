
// Merge in the same array

#include <bits/stdc++.h>
using namespace std;

void merginginSameArray(vector<int> &arr1, vector<int> &arr2) {
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            // If the element in arr1 is smaller, add it to arr2
            arr2.insert(arr2.begin() + j, arr1[i]);
            i++;
        } else {
            // If the element in arr2 is smaller or equal, move to the next element in arr2
            j++;
        }
    }

    // If there are remaining elements in arr1, append them to arr2
    while (i < arr1.size()) {
        arr2.push_back(arr1[i]);
        i++;
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    merginginSameArray(arr1, arr2);

    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

