#include <iostream>

using namespace std;
int input(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<"Enter the values "<<i<<endl;
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cout<<"How many number are you want in the array"<<endl;
    cin>>n;
    int arr[n];
    input(arr,n);
    cout<<"here is your array are:"<<endl;
    for(int i = 0 ; i < n ; i++){
        
        cout<<arr[i]<<endl;
    }

    return 0;
}
