#include<bits/stdc++.h>
using namespace std;
    
    int main(){
    // Types of declaration of map 
    map<int,int>mpp;

    map<pair<int,int>,int>mpp1;

    map<int,pair<int,int>>mpp2;

    // Using of Declaration

    mpp[1]= 2;   
    mpp[2]= 3;  
    mpp.emplace(3,4);
    mpp.insert({4,5});

    cout<<mpp[1]<<endl;

    // Traverse the array

    for(auto it : mpp){
        cout<<it.first <<" "<<it.second<<endl;
    }

    cout<<"Second type of Declaration"<<endl;

    mpp1[{5,3}] = 10;
    mpp1[{6,2}] = 11;
    mpp1[{7,4}] = 12;
    mpp1[{8,5}] = 13;
    // cout<<mpp1[{2,3}]<<endl;

    for(auto it1 : mpp1){
        cout<<it1.first.first<<it1.first.second<<" "<<it1.second<<endl;


    

    }


}