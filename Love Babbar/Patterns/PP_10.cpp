#include<iostream>
using namespace std;
int main() {


/*
*****
****
***
**
*
*
**
***
****
*****       */
   
   int n = 5;
   int i = 1;
   while( i<= n){
        int j = 1;
          while( j <= n-i+1){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
   } 

   int r = 1;
   while ( r <= n){
    int t = 1;
    while( t <= r){
        cout<<"*";
        t++;
    }
    cout<<endl;
    r++;
   }


}





