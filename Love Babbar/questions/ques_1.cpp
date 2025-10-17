// Given an Array of  itegers and a Position 'M' .where you have to reverse the array;


#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int m) {
    int s = m+1;             // M is the index number 
    int e = arr.size() - 1;
    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(vector<int>arr){
     for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {2, 3, 1, 10, 8, 4, 9, 7};
    int m = 3;

    reverse(arr, m);

    print(arr);

    
}


