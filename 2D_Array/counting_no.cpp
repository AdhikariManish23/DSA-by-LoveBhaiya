#include<bits/stdc++.h>
using namespace std;
    int counting(int arr[][4], int row, int col){
        int count = 0;

        for(int row = 0; row<3; row++){
            for(int col = 0; col< 4; col++){

                if( arr[row][col] == 5){
                    count++;
                }
            }
        }
        return count;
    }


    int main(){

        int arr[3][4]= {{1,5,5,4}, {2,3,5,5},{3,6,7,5}};

        for(int i = 0 ; i< 3; i++){
            for(int j = 0; j< 4; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Total 5 is present "<<endl;
    
        int print = counting(arr,3,4);
        cout<<print;
     return 0;
}