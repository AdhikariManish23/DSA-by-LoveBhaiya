#include<iostream>
using namespace std;
    int main(){
    
    int n = 5;
    int i = 1;
     while( i <= n){
        int j = 1;
        while( j <=n-i+1){
            cout<<j;
            j++;

        }
        int sd = 1;
        while( sd<=i-1){
            cout<<"*";
            sd++;
        }
        int as = i-1;
        while(as){
            cout<<"*";
            as--;
        }
        
        int ck = n-i+1;
        while(ck){
            cout<<ck;
            ck--;
        }
        cout<<endl;
        i++;

     }
     return 0;
}