/* Find out the Total occurence of a element */

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

        int arr[9]= {1,2,4,4,4,4,4,5,6};

        int first = First_Occurence(arr, 9, 4);
        int last = last_Occurence(arr, 9, 4);

        int total_occurence = (last-first)+1;

        cout<<total_occurence;
    

     return 0;
}