#include<iostream>
using namespace std;
    /*
        write five number and the total is: */
    
    int main(){
     
    int i = 1;
    int number;
    int total = 0;
    cout<<"Enterr the value"<<endl;

    while ( i <= 5 )
    {
        cin>> number;
        total = total + number ;
        i++;
    }
    cout<<"your total is "<<total;
    
    
     return 0;
}