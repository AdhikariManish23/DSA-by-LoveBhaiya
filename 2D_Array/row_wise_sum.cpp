#include<bits/stdc++.h>
using namespace std;
    int printSum(int arr[][3],int row, int col){

        cout<<"Printing the sum "<<endl;        
        for(int row = 0; row <2 ; row++){
            int sum = 0;
            for(int col = 0; col < 3; col++){
                sum+= arr[row][col];
            }
            cout<<sum<<" ";
        }
    }
    
    int main(){
    
    int arr[2][3];

    //input
    cout<<"Enter the element "<<endl;
    for(int i = 0; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
            cin>>arr[i][j];
        }
    }

    // output
    cout<<"Printing the output "<<endl;
    for(int i = 0; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
   printSum(arr,2,3);
} 