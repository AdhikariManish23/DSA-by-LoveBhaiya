 //  Question 1

// #include<iostream>
// using namespace std;
//     void BubbleSort(int arr[], int n){
        
//         for( int i = 1; i < n ; i++){
//             for( int j = 0 ; j < n-i; j++){
//                 if(arr[j]>arr[j+1]){
//                     swap(arr[j],arr[j+1]);
//                 }
//             }
//         }
//     }

//     int main(){
//         int n = 6;
//         int arr[n]={6,7,3,9,1,4};

//         BubbleSort(arr,6);

//         for(int i = 0; i< n; i++){
//             cout<<arr[i]<<" ";
//         }

//      return 0;
// }


//  Question 2

#include<iostream>
using namespace std;
    void InsertionSort(int arr[], int n){

        for(int i = 0 ; i< n -1; i++){

            for(int j = i+1 ; j > 0; j--){

                if(arr[j] < arr[j-1]){

                    swap(arr[j],arr[j-1]);
                }
                else{
                    break;
                }
            }
        }
    }
    int main(){
    
    int arr[6]= {8,5,4,9,1,2};

    InsertionSort(arr, 6);

    for(int i = 0 ; i < 6; i++){
        cout<<arr[i];
    }

     return 0;
}