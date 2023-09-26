/*
   Question 

 First and Last Position of an Element In Sorted Array 
 
 example:  input = 1,2,3,4,3,3,5,3     element = 3 (find the first and last occurence of 3)
           output = 2 7 
 
 */


// #include<iostream>
// #include<vector>
// using namespace std;

// int firstOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n-1;
//     int ans = -1;
    
//     while(s <= e) {
//         int mid = s + (e - s) / 2;
//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int lastOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n-1;
//     int ans = -1;
//     while(s <= e) {
//         int mid = s + (e - s) / 2;
//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
//     pair<int, int> p;
//     p.first = firstOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);
//     return p;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 3, 4};
//     pair<int, int> result = firstAndLastPosition(arr, arr.size(), 3);
    
//     cout << "First & last Occurrence: " <<result.first<<" "<<result.second;
   
    
// }



/*  Without using Vector and Pair */



#include<iostream>
using namespace std;
    
    int First_Occurence(int arr[] , int n , int key){
        int s = 0;
        int e = n-1;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s<=e){
           
            if(arr[mid] == key){
                ans = mid ; 
                e = mid - 1 ; 
            }
            else if ( arr[mid] > key ){
                e = mid - 1;
            }
            else{
                s = mid + 1 ;
            }

            mid = s + (e - s)/2 ;
        }
        return ans;
    }

     int last_Occurence(int arr[] , int n , int key){
        int s = 0;
        int e = n-1;
        int ans = -1;
        int mid = s + (e - s)/2;
        while(s<=e){
           
            if(arr[mid] == key){
                ans = mid ; 
                s = mid + 1 ; 
            }
            else if ( arr[mid] > key ){
                e = mid - 1;
            }
            else{
                s = mid + 1 ;
            }

            mid = s + (e - s)/2 ;
        }
        return ans;
    }
    int main(){
    
    int arr[]= {1,2,2,3,3,4,5};

    cout<<" First Occurence of 2 in Index is : "<<First_Occurence(arr, 7 , 2)<<endl;
    cout<<" First Occurence of 2 in Index is : "<<last_Occurence(arr, 7 , 2);
    

     return 0;
}