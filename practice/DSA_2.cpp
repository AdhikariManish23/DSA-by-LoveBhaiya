#include<iostream>
using namespace std;
    int main(){
    int n;
    cin>>n;
    int i = 2;
    
    cout<<"Enter the value"<<endl;
    
    while(i<n){
        if(n&i==0){
            cout<<"it is not a prime number"<<i<<endl;
        }
        else{
            cout<<"it is a prime number"<<i<<endl;
        }
        i++;
    }
     
}