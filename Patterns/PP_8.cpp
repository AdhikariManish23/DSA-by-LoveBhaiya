#include<iostream>
using namespace std;
    int main(){
    /* Question 21
       1111
        222
         33
          4
    */
//    int n =4 ;
//    int i =1;


//    while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space--;

//         }
//         int j = 1;
//         while( j<=n-i+1){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//    }

        /* Question 22
                      
                    1
                   22
                  333
                 4444*/
    

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
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    }