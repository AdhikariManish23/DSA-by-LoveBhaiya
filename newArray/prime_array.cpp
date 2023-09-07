#include<iostream>
using namespace std;
    
    bool isPrime( int num){
        if ( num <= 1)
        return false;

        for(int i = 2; i*i <= num; i++){
            if (num%i==0)
            return false;
        }
        return true;
    }
    int* prime_numbers(int n){
        int* primeArray = new int[n];
        int count = 0;
        int num = 2;

        while(count <n){
            if(isPrime(num)){
                primeArray[count]=num;
                count++;
            }
            num++;
        }
        return primeArray;
    }


    int main(){
    

     return 0;
}