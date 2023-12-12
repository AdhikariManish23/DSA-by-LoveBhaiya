#include<iostream>
using namespace std;


   void printArray( int arr[], int size){
    cout<<"Printing the array "<<endl;
    for ( int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
        }
    cout<<"Printing is done"<<endl;
  
   }
   
    int main(){
    int arr[3]= { 3,5,7};
    cout<<"the value of second place "<<arr[0]<<endl;
    
    int number [15] ;
    cout<<"The value at 3 is "<<number[20]<<endl;

    int third[10]= {3,5,7,8};
    int n = 10;
    //calling function to print
    printArray(third,10);
    cout<<endl;
    // cout<<"Print the araaay "<<endl;
    // for ( int i = 0 ; i< n ; i ++){
    //     cout<<third[i]<<" ";
    // }

    int fourth[12]= {0};
    int g= 12;
    //calling function to print 
    printArray(fourth,12);
    // cout<<"Print the array "<<endl;
    // for(int i = 0; i<g ; i++){
    //     cout<<fourth[i]<<" ";
    // }

}