
// Question
// Book Allocation

#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m , int mid){
        int student = 1;
        int page = 0;
        for(int  i = 0 ; i<n; i++){
            if(page + arr[i] <= mid){
                page += arr[i];
            }
            else{
                student++;
                if(student > m || arr[i]> mid){
                    return false;
                }
                page +=arr[i];
            }
        }
        return true;
}


int BookAllocate(int arr[] , int n , int m ){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        if( isPossible (arr, n, m, mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e -s)/2;
        }
    return ans;
}


int main(){
    int n = 4;
    int arr[]= {10,20,30,40};
    int m = 2;
    int result = BookAllocate(arr,n,m);
    cout<<" Minimum sum of Pages "<<result<<endl;
}