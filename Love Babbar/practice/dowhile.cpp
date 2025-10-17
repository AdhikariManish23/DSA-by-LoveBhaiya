#include<iostream>
using namespace std;
int main(){
    // int n = 10;
     
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i%2==0)
    //     cout<< i <<endl;       /* code */
    // }
   
    int number; 
    
    cout << "\nPlease Enter Maximum limit Value to print Even Numbers = ";
    

    cin >> number;
    
    cout << "\nList of Even Numbers from 1 to " << number << " are\n"; 
    
    for(int i = 2; i <= number; i= i + 2) 	{ 	
    
    cout << i <<" "; 
    }
    

}
