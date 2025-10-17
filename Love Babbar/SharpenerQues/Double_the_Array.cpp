#include<bits/stdc++.h>
using namespace std;
    vector<int> doubletheArray(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(2 * n);

        for(int i = 0 ; i< n; i++){
            ans[i] = arr[i];
        }

        for( int i = 0; i< n ; i++){
            ans[i+n] = arr[i];   // place where element is now written n,n+1,n+2,n+3.........
        }
    return ans;

    }


    int main(){
    
    vector<int> arr = {1,2,3};

    vector<int> ans = doubletheArray(arr);

    for(int i = 0; i < ans.size(); i++){
        cout<< ans[i] << " ";
    }

     return 0;
}