#include<iostream>
using namespace std;
    void selection_sort(int arr[], int n){
        for(int i = 0 ; i < n-1 ; i++){
            int minIndex = i;
            for(int j = i+1; j < n; j++){
                if(arr[minIndex] > arr[j]){
                    minIndex = j ;
                }
                
                
            }
            swap(arr[minIndex] , arr[i]);
        }
    }
    int main(){
    int n = 6;
    
    int arr[n] = {6,9,3,1,5,2};
   

    selection_sort(arr,n);

    for(int i = 0; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     return 0;
}