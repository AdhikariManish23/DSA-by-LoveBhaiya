/* Your are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
  You are also given an integer "k" which denote the nukmber of aggressive cows. You are given the task 
  of assigning stalls to "k" cows such that the minimum distance between any two of them is the maximum possible.
  Print the maximum possible minimum distance.*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int n, int k ,int mid){
  int cowsCount = 1;
  int lastpos = stalls[0];

  for(int  i = 0; i< n ; i++){
    if( stalls[i] - lastpos >= mid){
      cowsCount++;
      if(cowsCount == k){
        return true;
      }
      lastpos = stalls[i];
    }
  }
  return false;
}

int Aggressivecows(vector<int> &stalls , int  k, int n ){
  sort(stalls.begin(), stalls.end());/////???????

  int s = 0 ;
  int e = stalls[n - 1] - stalls[0];//////////????????
  int ans = -1;
 

  while(s <= e){
     int mid = s +  ( e-s)/2;
      if ( isPossible(stalls ,n , k , mid  )){
          ans = mid ;
          s = mid +1;
      }
      else{
        e = mid -1;
      }
      mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
  int n = 5; 
  vector<int> stalls = {4,3,2,1,6};////????
  int k = 2;
  int result = Aggressivecows(stalls , k , n);
  cout<<"Maximum Distance Between Two Cows "<< result;


}
