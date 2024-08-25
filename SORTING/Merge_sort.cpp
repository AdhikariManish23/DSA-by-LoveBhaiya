
//  Merging in the another array

#include<bits/stdc++.h>
using namespace std;
    
    
    void merge(int arr1[], int n ,int arr2[], int m , int arr3[]){
        int i = 0, j = 0;
        int k = 0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                arr3[k] = arr1[i];
                k++;
                i++;    
            }
            else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }

        while(i<n){
            arr3[k++] = arr1[i++];
            //k++;
            //i++;
        }

        while(j<m){
            arr3[k++] = arr2[j++];
            //k++;
            //j++;
        }
    }


    void print (int arr[],int size){
        for(int i = 0; i< size ; i++){
            cout<<arr[i]<<" ";
        }
    }

    int main(){
    
        int arr1 [6] = {1,3,5,7,9,10};
        int arr2[4] = {2,4,6,8};

        int arr3[10] = {0};

        merge(arr1,6,arr2,4,arr3);

        print(arr3, 10);
    

     return 0;
}
