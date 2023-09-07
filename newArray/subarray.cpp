#include<iostream>
using namespace std;
    int subArray(int arr[],int n){
        for(int i = 0; i<n; i++){
            for(int j =i; j <n; j++){
                for(int k =i; k <= j; k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
    }
    int main(){
        int n;
        cout<<"Enter thte value "<<endl;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n ; i++ ){
            cin>>arr[i];    
            

        }
        cout<<"Subarray is:"<<endl;
        int print= subArray(arr,n);
        cout<<print;

        // for(int i = 0; i<n; i++){
        //     for(int j = i; j <n; j++){
        //         for(int k =i; k <= j; k++){
        //             cout<<arr[k]<<" ";
        //         }
        //         cout<<endl;
        //     }
        // }
    

     return 0;
}