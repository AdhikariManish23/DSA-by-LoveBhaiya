#include<bits/stdc++.h>
using namespace std;
    vector<int> wavePrint(vector<vector<int>> arr, int nrows , int cols){

        vector<int> ans;

        for(int col = 0 ; col < cols; col++){

            if(col&1){
                // odd Index-- Bottom to Top
                for(int row = nrows-1; row>= 0; row--){
                    ans.push_back(arr[row][col]);
                }
            }
            else{
                // even Index-- top to bottom
                for(int row = 0; row < nrows; row++){
                    ans.push_back(arr[row][col]);
                }
            }
        }
        return ans;
    }


    int main(){
    
    int nrows, cols;
    cout << "Enter the number of rows and columns: "<<endl;
    cin >> nrows >> cols;

    vector<vector<int>> arr(nrows, vector<int>(cols, 0));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
        
    }
    cout<<endl;
    cout<<"Before Wave printed array "<<endl;
     for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < cols; j++) {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int> result = wavePrint(arr, nrows, cols);

    cout << "Wave printed array:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}