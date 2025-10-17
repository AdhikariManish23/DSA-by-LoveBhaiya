#include<iostream>
using namespace std;
    /* sum of 5 inputs */

    int total( int arr[], int size){
        int sum = 0;
        for (int i = 0; i<size ; i++){
            sum = sum + arr[i];  
            
        }
        return sum;
    

    }
    int main(){
        int num[5];

        cout<<" Enter the values"<<endl;
        for( int  i = 0; i < 5; i++ ){
            cin>>num[i];
        }

        cout<<"Sum is "<<total(num,5);

    

     
}