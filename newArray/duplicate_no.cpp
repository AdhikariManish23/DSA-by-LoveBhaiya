#include<iostream>
using namespace std;
    /*  find only one duplicate number
    */
    int duplicate(int arr[], int n){
    int ans=0;       
        for(int i = 0; i<n; i++){
            ans = ans ^ arr[i];
        }
        for(int i = 1; i<n; i++){
            ans = ans ^ i ;
        }
        return ans;
    }
   
    int main(){
    
    int arr[]= {1,2,3,4,3};

    int cap = duplicate(arr,5);
    cout<<cap;
     return 0;
}