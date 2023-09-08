#include<iostream>
using namespace std;

    /* find the numeber which dont have pair */


    int unique( int arr[], int n){
        int ans= 0;
        for(int i = 0; i < n; i++){
            ans = ans^arr[i];
        }
        return ans;
    }
    
    int main(){
        int arr[]= { 2,3,4,6,4,3,2};
        int gap = unique(arr,7);
        cout<<gap;

    

     return 0;
}