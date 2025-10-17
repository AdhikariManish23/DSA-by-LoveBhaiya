#include<bits/stdc++.h>
using namespace std;
    void moveZerose(vector<int>arr){

        int i = 0;
        for(int j = 0; j <arr.size() ; j++){
            if(arr[j] != 0){
                swap(arr[j], arr[i]);
                i++;
            }
        }

    }


    int main(){
    vector<int>arr= {2,0,1,0,0,3,0,0};

    moveZerose(arr);

    for(auto it : arr){
        cout<<it<<" ";
    }

     return 0;
}