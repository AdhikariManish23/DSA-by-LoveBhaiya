#include<iostream>
using namespace std;
/* print a number in reverse */
int reverse(int n ){

int reminder; 
int rev = 0;


while( n > 0 ){
    reminder = n % 10 ;
    rev = rev * 10 + reminder; 
    n = n/10;
}
return rev;
}
   

    int main(){
    
    int n ;
    cin>>n;
    int print = reverse(n);
    cout<<print;

     return 0;
}