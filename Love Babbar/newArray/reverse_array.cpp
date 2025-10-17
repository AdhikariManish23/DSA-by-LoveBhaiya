#include<iostream>
using namespace std;
    void reverse( int arr[], int n){
        int start = 0;
        int end   = n - 1;
        while(start <= end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
    
    void printArray( int arr[], int n){
        for (int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
    }
    int main(){

        int arr[5]= {23,43,52,21,12};
        int gff[6]= {2,-6,5,4,-1,8};

        reverse(arr,5);
        reverse(gff,6);
        cout<<"first Array values after swapping "<<endl;
        printArray(arr,5);
        cout<<endl;
        cout<<"Second Array values after swapping "<<endl;
        printArray(gff,6);

     return 0;
}