#include<iostream>
using namespace std;
    int main(){

        //Question 9
        //Using For Loop Method
    //     int n = 4;
    //     for(int i=1; i<=n; i++){
    //         for(int j=0; j<i; j++){
    //             cout << i+j;
    //         }
    //         cout << endl;
    //     }
    //  return 0;

        //Alternative method(While Loop Method)

    //     int n =4;
    //     int i= 1;
    //     while(i<=n){
    //         int j = 1;
    //         while(j<=i){
    //             cout<<i+j-1<<" ";
    //             j++;

    //         }
    //         cout<<endl;
    //         i++;
    //    }

        // Question 10

    // int n = 4;
    // for( int i = 1; i <= n ; i++){
    //     for( int j = 1; j <= i ; j++){
    //         cout<<i-j+1<<" ";
            
    //     }
    //     cout<<endl;
    // }

        //Question 11
    // int n= 3;

    // int i = 1;
    // while( i<= n){
    //     int j = 1;
        
    //     while( j<= n){
    //         char ch = 'A'+ i - 1;
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

        // using For Loop Method
    // int n =4;
    // for(int i =1; i<=n; i++){
    //      char ch = 'A' + i -1;
    //     for(int j =1; j<=n; j++){
    //         cout<<ch<<" ";
            
       
    //     }
    //     cout<<endl;
    // }

        //Question 12
        
    int n= 3;
    int i =1;
    while( i<=n ){
        int j = 1;
        
        while( j<=n){
            char ch = 'A'+ j - 1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    

}
