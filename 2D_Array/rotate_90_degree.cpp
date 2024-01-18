#include<bits/stdc++.h>
using namespace std;
     int rotate(vector<vector<int>>& matrix) {

        int row = matrix.size();

        for(int i = 0; i <row-1; i++){
            for(int j = i+1; j<row; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i =0; i< row; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }


    int main(){

       int rows, cols;

    cout << "Enter the number of rows and columns like(4,4):" << endl;
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Enter the values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Here is your Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate(arr);
    cout << "After 90-degree rotation:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}