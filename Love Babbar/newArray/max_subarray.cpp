#include<iostream>
using namespace std;
    int maximum_Subarray( int arr[] ,int n){
    
    int sum = 0;
    int maxi = arr[0];
    for( int i = 0; i<n ; i++){
        sum = sum + arr[i];
        maxi = max(maxi,sum);

        if( sum< 0)
        sum= 0;
    }
    return maxi;
    }
    

    int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max = maximum_Subarray(arr , n);
    cout<<max;
    

     return 0;
}