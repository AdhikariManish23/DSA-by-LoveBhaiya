#include<iostream>
using namespace std;
    int search( int arr[], int size, int key){
        for ( int i = 0; i <size; i++){
            if ( arr[i] == key ){
                return 1;
            }
        }
        return 0;
    }
    int main(){
        int arr[8]={5,3,6,-2,7,-4,9,10};
        int key ;
        cout<<"Enter the element to search for"<<endl;
        cin>>key;

        int found =  search(arr, 8 , key);
        if (found){
            cout<<"Key is found"<<endl;
        }
        else{
            cout<<"Keys not found";
        }

        
    

     return 0;
}