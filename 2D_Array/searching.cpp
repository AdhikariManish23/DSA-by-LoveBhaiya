#include<bits/stdc++.h>
using namespace std;
    // you must have to  enter the value of column [4]
    bool ispresent(int arr[][4] , int target , int row , int col){
        for(int row =0 ; row < 3; row++){
            for(int col = 0; col< 4; col++){

                if(arr[row][col] == target){
                    return  1;
                }
            }
        }
        return  0;
    }


    int main(){

    int arr[3][4];

    cout<<" Enter the element for the array "<<endl;

    for( int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4; col++){
            cin>>arr[row][col];
        }
    }  

    for( int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }  

    cout<<" Enter the element to search "<<endl;
    int target;
    cin>>target;


    if(ispresent(arr,target,3,4)){
        cout<<" Element is found "<<endl;
    }
    else{
        cout<<"Element is not fopund ";
    }



     return 0;
}