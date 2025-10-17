#include<bits/stdc++.h>
using namespace std;
    /*  Sort this array to second element , 
        if second the element is same then
         sort accordding to first element but in Descending 
    */
    
    bool comp(pair<int,int> p1 , pair <int, int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first > p2.first) return true;
        return false;
    }

    int main(){
    vector<pair<int,int>> a = {{1,2},{2,1},{4,1}};

    sort(a.begin(), a.end(), comp);

    for(auto it : a){
        cout<<it.first<<it.second<<" ";
    }

    }
   