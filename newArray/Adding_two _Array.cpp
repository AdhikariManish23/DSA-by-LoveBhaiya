#include <bits/stdc++.h>
using namespace std;

//  not working in VS code 

vector<int> reverseVector(vector<int> &v) {
    int s = 0;
    int e = v.size() - 1;

    while (s < e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, vector<int> &b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    vector<int> ans;

    // Starting of adding of two numbers
    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // First case when i element is more than the j element
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Second case when j element is more than the i element
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third case when there is a carry in the last digit
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> arr1 = {5, 6, 7, 8};

    vector<int> ans = findArraySum(arr, arr1);

    vector<int> print = reverseVector(ans);

    for (auto it : print) {
        cout << it << " ";
    }

    return 0;
}