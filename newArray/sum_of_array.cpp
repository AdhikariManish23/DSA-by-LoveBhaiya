#include<iostream>
using namespace std;

    int main(){
     int n ;
     int total = 0;
     cout<<"Enter the number of array"<<endl;
     cin>>n;
     int arr[n];
     for( int i = 0 ; i<n; i++){
        cin>>arr[i];
        total = total + arr[i];
     }
    cout<<"Total of your Array ia : "<<total;


     return 0;
}