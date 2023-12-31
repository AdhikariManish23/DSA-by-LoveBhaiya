
//  Using Binary search 

#include<iostream>
using namespace std;
    int BinarySearch(int arr[], int n , int key){
        int start = 0;
        int end = n-1;

        int mid = (start+end)/2;

        while(start <= end){
            if(arr[mid] == key){
                return mid;
            }
            if(key > arr[mid]){
                start = mid+1; 
            }
            else{
                end = mid-1;
            }
            mid = (start + end )/2;
        }
        return -1;
    }
    int main(){
    
    int arr[5]={23,45,65,76,87};

    int print = BinarySearch(arr,5,76);

    cout<<"Index of 76 is : "<<print;

     return 0;
}