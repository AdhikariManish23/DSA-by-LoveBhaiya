#include<bits/stdc++.h>
using namespace std;
     
     //Without using Vector
     
//      int maximum(int arr[][4], int row, int col){
//         int count = 0;

//         for(int i = 0; i< row; i++){
//             for(int j = 0; j< col; j++){

//                 if(arr[i][j]==5){
//                     count++;
//                 }
//             }
//         }
//         return count;
//      }


//     int main(){
//         int arr[3][4]={{1,2,3,4},{5,6,5,0},{8,9,5,10}};

//         int result = maximum(arr,3,4);
//         cout<<"Maximum count of 5 is : "<<result;

//      return 0;
// }



// By using Vector



int countOccurrences(vector<vector<int>> arr) {
    int count = 0;
    int m = arr.size();
    int n = arr[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 5) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 5, 4}, {3, 2, 4, 5}, {6, 5, 2, 7}};

    int result = countOccurrences(arr);
    cout << "Occurrences of the number 5 in the matrix: " << result << endl;

    return 0;
}