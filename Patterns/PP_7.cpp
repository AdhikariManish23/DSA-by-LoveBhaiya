#include<iostream>
using namespace std;
    int main(){
    //Question 18
    
    /*
                   *
                  **
                 ***
                ****
    */

    int n = 4;
    int i = 1;
    while(i<=n){
        int space= n-i;
        while(space){
            cout<<" ";
            space--;    
        }
        int j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

   /* Queation 19
        *****
        ***
        **
        *
    */
   
    // int n = 4;
    
    // int i = 1;
    // while( i<= n){
    //     int j  = 1;
    //     while( j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }
    
    /* Question 20
            *****
             ****
              ***
               **
                *
    */

    // int n = 5;
     
    // int i = 1;
    // while(i<= n){
    //     int space= i - 1;
    //     while(space){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j =1;
    //     while(j <= n-i+1){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<endl;
    //     i++;
    // }
}