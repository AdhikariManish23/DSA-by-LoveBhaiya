#include<iostream>
using namespace std;
    int main(){
     int n = 4;
     int i = 1;
     while(i<=n){
        int sp= n-i;
        while(sp){
            cout<<" ";
            sp--;
        }
        int j = 1;
        while(j <= i){
            cout<<j;
            j++;
        }
        int f = i-1;
        while(f){
            cout<<f;
            f--;
        }
        cout<<endl;
        i++;
     }
     return 0;
}