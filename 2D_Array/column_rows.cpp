#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[3][4];
    // different types of input taking
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {{1,11,111,1111} , {2,22,222,2222} , {3,33,333,3333}};

    // cout<<arr2[1][3];
    
    cout<<"Enter the values for row "<<endl;
    // Taking input a 2D arra --> row wise
    for( int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4; col++){
            cin>>arr[row][col];
        }
    }  

    // printing

    for( int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    } 

    cout<<"Enter the values for column "<<endl;
    // Taking input a 2D array --> column wise)
    for( int col = 0 ; col < 4 ; col++){
        for(int row = 0 ; row < 3; row++){
            cin>>arr[row][col];
        }
    }  

    // printing

    for( int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    } 

     return 0;
}