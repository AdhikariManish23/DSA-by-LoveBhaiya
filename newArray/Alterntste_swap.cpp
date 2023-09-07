#include<iostream>
using namespace std;
    void printArray(int arr[], int n ){
    for(int i = 0; i < n ; i++){
        cout<<arr[i];

    }
    }

    void swapAlternative( int arr[], int n){
    cout<<"After swapping the Array :"<<endl;
    for( int i = 0 ; i < n ; i+=2){
        if(i+1< n){
            swap(arr[i],arr[i+1]);
        
        }
    }
    
    }
    int main(){
    int n;
    cout<<"Array"<<endl;
    int odd[5] = {1,2,3,4,5};
    int even[6]= {2,4,6,8,10,12};

    
    swapAlternative(odd, 5);
    printArray(odd, 5);
    cout<<endl;
    
    
    swapAlternative(even, 5);
    printArray(even, 5);

     return 0;
}