#include<iostream>
using namespace std;

    /* given a number like 322 
        firstly it will multopily and then add after that
         it subtract sum from prod */

    int product_and_sum(int n){
        
        int prod = 1;
        int sum = 0;
        while( n!=0){
            int digit = n%10;
            prod = prod*digit;
            sum = sum + digit;

            n = n / 10;
        }
        int ans = prod - sum;
        return ans;
    }
    int main(){
   
    int n ;
    cout<<"Enter the value"<<endl; 
    cin>>n;
    int gap = product_and_sum(n);
    cout<<gap;
}