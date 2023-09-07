#include<iostream>
using namespace std;
    int main(){

      /*  ---> it can print reverse value as well as digit value by removing endl it can print reverse value.  */

    int n;
    cout<<"Enter the number :"<<endl;
    cin >> n;
    while( n != 0){
        cout << n%10 <<endl;

    /*  This line outputs the last digit of the current 
        value of n by using the modulo operator (%) with 10.
        The modulo operation gives the remainder when n is divided by 10,
        which effectively gives the last digit of the number.
        After outputting the digit,
        endl is used to move the cursor to the next line.      
    */
       
        n = n/10;

    /*  This line divides the value of n by 10,
        effectively removing the last digit from the number.
        This operation prepares n for the next iteration of the loop,
        where the next digit will be extracted and printed.    
    */
    }
    
    
}