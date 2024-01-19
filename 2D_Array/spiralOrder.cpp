#include<bits/stdc++.h>
using namespace std;
    vector<int> spiralOrder(vector<vector<int>> matrix){

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        int count = 0;
        int total = row*col;

        while(count < total){

            // Printing Starting Row
            for(int index = startingCol; count , total && index<= endingCol; index ++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //Printing Ending Col
            for(int index = startingRow; count < total && index<= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //Printing EndingRow
            for(int index = endingCol; count < total && index >= startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //Printing Starting Col
            for(int index = endingRow; count < total && index >= startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;

        }
        return ans;
    }


    int main(){
    
     int rows, cols;
     cout << "Enter the number of rows and columns: "<<endl;
     cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "Enter the values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Before spiral order:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;  // Add a newline after each row
    }

    vector<int> result = spiralOrder(arr);

    cout << "Spiral order printed array:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

}