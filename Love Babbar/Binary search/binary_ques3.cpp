#include<iostream>
using namespace std;

int PeekInMountainArray(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid;

    while (s < e) {
        mid = s + (e - s) / 2;
        
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int main() {
    int arr[] = {1, 3, 5, 7, 10, 5, 4};
    //int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = PeekInMountainArray(arr, 7);
    cout << "The peak element " <<arr[peakIndex] << endl;


}