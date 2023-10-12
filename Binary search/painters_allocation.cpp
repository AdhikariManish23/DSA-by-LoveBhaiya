/* Give an array/list of lenght'n' , where the array/list represents the boards
and each element of the given array/list represents the length of each board.
some 'k' number of painters are available to paint these boards. Consider that 
each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting
all the 'n' boards under a constraint that any painters will only paint the continuous 
sections of boards.  */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPossible(vector<int> boards, int k ,int mid){
    int painter=1;
    int wall = 0;
    for(int i = 0; i<boards.size(); i++){
        if(wall + boards[i] <= mid){
            wall += boards[i];
        }
        else{
            painter++;
            if(painter>k || boards[i]>mid){
                return false;
            }
            wall = boards[i];
        }
    }
    return true;
}



int findLargestMinDistance(vector<int>boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < boards.size() ; i++){
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s)/2;
    int ans = -1;

    while ( s<=e){
        if(isPossible(boards , k , mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int main() {
    vector<int> boards = {5,5,5,5};
    int k = 2;
    int largestMinDistance = findLargestMinDistance(boards, k); 
    cout << "The largest minimum distance is: " <<largestMinDistance<< endl;
    return 0;
}