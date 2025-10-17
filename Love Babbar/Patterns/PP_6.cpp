#include<iostream>
using namespace std;
    int main(){

        //Question 13
    
        // int n ;
        // cout<<"Enter the value"<<endl;
        // cin>>n;
        // int i = 1;
        // char ch = 'A';

        // while( i<= n){
        //     int j =1;
        //     while( j<=n ){
        //         cout<<ch<<" ";
        //         ch++;
        //         j++;

        //     }
        //     cout<<endl;
        //     i++;
        // }
        //  return 0;


        //Question 14
    // int n = 3;
    // int i = 1;

    // while( i<= n){
    //     int j = 1;
    //     while( j<= n ){
            
    //         char ch = 'A'+i+j-2;
        
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

        // Question 15 

        // int n = 3;
        // int i = 1;
         
        //  while( i<= n ){
        //     int j = 1;
        //     while( j<= i){
        //         char ch = 'A'+i-1;
        //         cout<<ch<<" ";
        //         j++;

        //     }
        //     cout<<endl;
        //     i++;
        //  }

        //Question 16

    // int n = 4;
    // char count = 'A';

    // for( int i = 1; i<= n; i++){
    //     for(int j = 1; j<= i; j++){
    //         cout<<count<<" ";
    //         count++;
            
    //     }
    //     cout<<endl;
    // } 

        //Question 17
    int n = 4;
    int i = 1;
     
        while( i<=n ){
            int j = 1;
            while( j<= i){
                char ch = 'A'+i+j-2;
                cout<<ch<<" ";
                j++;
            }
            cout<<endl;
            i++;
        }
}