#include<iostream>
using namespace std;
    int main(){
    int x , y ;
    cout<<"Enter the value of  x "<<endl;
    cin>>x;
    cout<<"Enter the value of y "<<endl;
    cin>>y;
    int temp;
    temp = x;
    x = y ;
    y = temp;

    cout<<x<<endl;
    cout<<y;
     return 0;
}