 /* write a function that takes a unsigned integer and return the number of '1' bits.
           for Example : input n = 0000 0000 0000 0000 0000 0000 0000 0101
                         output  = 2 */

#include<iostream>
using namespace std;
    int number_of_bits( int n){
        int count = 0;
        while(n!=0){ 
            
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;

    }
    int main(){
        
        int n = 000000000000000000000000000111;

        int ans = number_of_bits(n);

        cout << ans;

        
   

     return 0;
}

    // Aletrnative method
    
        //      int count = 0;
        
        // // Iterate through each bit
        // while (n) {
        //     // Increment count if the least significant bit is set
        //     count += n & 1;
            
        //     // Right shift the number to move to the next bit
        //     n >>= 1;
        // }
        
        // return count;
