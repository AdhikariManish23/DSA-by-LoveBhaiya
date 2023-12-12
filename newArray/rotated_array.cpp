#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k) {
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}

int main() {
    vector<int> nums = {6, 8, 3, 4, 5};
    int k = 2;

    rotate(nums, k);

    //sort(nums.begin(),nums.end());  after using it , it becomes sorted not rotated so this is not a sorted rotated  array

    // Print the rotated array
    for (int it: nums) {
        cout << it << " ";
    }

    return 0;
}