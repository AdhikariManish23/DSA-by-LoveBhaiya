#include <iostream>
using namespace std;

int BinarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;

    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int findpivotNumber(int arr[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[e]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int Finding_In_Rotated_Sorted_Array(int arr[], int n, int key) {
    int pivot = findpivotNumber(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        return BinarySearch(arr, pivot, n - 1, key);
    } else {
        return BinarySearch(arr, 0, pivot - 1, key);
    }
}

int main() {
    int arr[7] = {9, 8, 7, 6, 1, 2, 3};
    int print = Finding_In_Rotated_Sorted_Array(arr, 7, 3);
    cout << print;

}