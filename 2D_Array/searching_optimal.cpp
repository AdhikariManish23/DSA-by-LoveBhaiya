#include<bits/stdc++.h>
using namespace std;
    // optimal Solution to search Target value
  
      bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }

    int main(){
       
    int row, col;

    cout << "Enter the value of Row and Col" << endl;
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout<<"This is your Matrix :"<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }


        int target;
        cout<<"Enter the target the value "<<endl;
        cin>>target;

        if(searchMatrix(arr, target)){
            cout<<"Target is found ";
        }
        else{
            cout<<"Target is not found";
        }

    

     return 0;
}