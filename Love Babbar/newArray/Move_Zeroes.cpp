#include<bits/stdc++.h>
using namespace std;

void movesZeroes(vector<int> &arr){
    int i = 0;

    // transfer non zero number 
    for(int j  = 0; j<arr.size(); j++){
        if( arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
   }

   // now tranfer zero
    while(i < arr.size()){  
        arr[i] = 0;
        i++;
    }
}

int  main (){
     vector <int> arr = {2,0,1,0,0,5,0};
     
     movesZeroes(arr);
     
     for(auto it : arr){
         cout<<it<<" ";
     }
}