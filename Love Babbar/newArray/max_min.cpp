#include<iostream>
using namespace std;

/* Array question   */

int maximum(int a[], int n){
  int max= a[0];          
  for(int i=0; i<n; i++){
    if(a[i] > max){
      max = a[i];
    }
    
  }
  return max;
 
}
  void input( int arr[], int size){
    for( int i = 0 ; i < size; i++){
     cout<<"Enter the values "<<i<<endl;
      cin>>arr[i];
    }
  }
// int minimum(int a[], int n){
//   int min= a[0];
//   for(int i=0; i<n; i++){
//     if(a[i] < min){
//       min = a[i];
//     }
    
//   }
//   return min;
 
// }
  int main(){
  int n ;
  cout<<"Enter the array"<<endl;
  cin>>n;
  int arr[n];
  input(arr,n);
  cout<<"maximum number is :"<<endl;
  int maxi = maximum(arr, 5);
  cout << maxi;
   return 0;
}