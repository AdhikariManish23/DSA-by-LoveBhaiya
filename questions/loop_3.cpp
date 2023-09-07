#include<iostream>
using namespace std;

    /* find out the prime number */


int main(){
    int n;
    cout<<"Enter the value :"<<endl;
    cin>>n;
    int i =2;

    if (i<n && n%i ==0)
    {
        cout<<"Not a prime no.";
        i++;
    }
    else{
        cout<<"It is a prime no.";
    }
    
}