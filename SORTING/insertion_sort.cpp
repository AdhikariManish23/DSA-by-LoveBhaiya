#include<iostream>
using namespace std;
    void insertionSorting(int arr[], int n){
        for(int i = 0; i< n -1; i++){
            for(int j = i+1; j > 0 ; j--){
                if(arr[j] < arr[j-1]){
                    swap(arr[j] , arr[j-1]);
                }
                else{
                    break;
                }
            }
        }
    }
    
    int main(){
    int n =6;
    
    int arr[]= {-4,5,0,1,2,3};
   

    insertionSorting(arr,n);

    for(int i = 0 ; i<n; i++ ){
        cout<<arr[i] <<" ";
    }
}

