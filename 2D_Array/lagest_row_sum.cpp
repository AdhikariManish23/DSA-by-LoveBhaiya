#include<bits/stdc++.h>
using namespace std;
    int largestSum(int arr[][3], int row, int col){

        int maxi = INT_MIN;
        int rowIndex = -1;

        for(int row = 0; row < 3; row++){
            int sum = 0;
            for(int col = 0; col < 3; col++){
                sum += arr[row][col];
            }

            if(sum > maxi){
                maxi = sum ;
                rowIndex= row;
            }
        }

        cout<<"The maximum sum is " << maxi <<endl;
        return rowIndex;
    }


    int main(){

        int arr[3][3];
        cout<<"Enter the value "<<endl; 
        for(int i = 0 ; i< 3 ; i++){
            for(int j = 0; j< 3; j++ ){
                cin>>arr[i][j];
            }
        }
        
        
        cout<<"Printing the array "<<endl;
         for(int i = 0 ; i< 3 ; i++){
            for(int j = 0; j< 3; j++ ){
                cout<<arr[i][j] <<" ";
            }
            cout<<endl;
        }
    
        int ans = largestSum(arr,3,3);
        cout<<"Max row sum is at Index is "<<ans;

     return 0;
}