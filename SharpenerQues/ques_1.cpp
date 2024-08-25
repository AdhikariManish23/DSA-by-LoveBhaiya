//  Question 1
/* Finding key by using binary operator */

// #include<iostream>
// using namespace std;
//     int BinarySearch(int arr[], int n,int key ){
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             if( key == arr[mid]){
//                 return mid;
//             }
//             else if(key> arr[mid]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid -1;
//             }
//             mid = s + (e - s)/2;
//         }
//         return -1;
//     }
//     int main(){

//         int arr[6]= {1,2,3,4,5,6};
        
//     cout<<"The Index Number of 4 is : "<< BinarySearch(arr,6,4);

    

//      return 0;
// }


//  Question 2

// Finding Pivot in a array By using Bianry Operator

#include<iostream>
using namespace std;
    int findingPivot(int arr[], int n){
        int s = 0;
        int e = n - 1;
        int mid = s + (e- s)/2;

        while(s < e){
            if( arr[mid] >= arr[0]){
                s= mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e - s)/2;
        }
        return s;
    }
    int main(){
    
    int arr[7]= {5,6,7,8,2,3,4};

    cout<<"pivot is "<<findingPivot(arr,7);

     return 0;
}
