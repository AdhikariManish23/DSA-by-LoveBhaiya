#include<iostream>
using namespace std;
    int unique( int arr[], int n){
        int ans= 0;
        for(int i = 0; i < n; i++){
            ans = ans^arr[i];
        }
        return ans;
    }
    int printArray( int arr[], int n){
        for( int  i =0; i<n; i++){
            cout<<arr[i];
        }
    }
    
    int main(){
        int arr[]= { 2,3,4,5,4,3,2};
        int gap = unique(arr,7);
        cout<<gap;

    

     return 0;
}