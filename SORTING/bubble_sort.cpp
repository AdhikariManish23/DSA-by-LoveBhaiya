#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 1 ; i < n ; i++) {
        // bool swapped = false;

        for (int j = 0; j < n ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                // swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted.
        // if (swapped==false) {
        //     break;
        // }
    }
}

int main(){
    int n = 6;
    
    int arr[n] = {6,9,3,1,5,2};
   

    bubbleSort(arr,n);

    for(int i = 0; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     return 0;
}