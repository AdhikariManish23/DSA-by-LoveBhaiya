/*
   Question 

 First and Last Position of an Element In Sorted Array 
 
 example:  input = 1,2,3,4,3,3,5,3     element = 3 (find the first and last occurence of 3)
           output = 2 7 
 
 */


#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 3, 4};
    pair<int, int> result = firstAndLastPosition(arr, arr.size(), 3);
    
    cout << "First & last Occurrence: " <<result.first<<" "<<result.second;
   
    
}