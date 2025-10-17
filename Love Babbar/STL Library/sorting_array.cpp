// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     vector<int>arr ={6,5,1,4,7,2};

//     cout<<"Original Vector"<<endl;

//     for(int i =0 ; i < arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sort(arr.begin(),arr.end());

//     cout<<"Sorted vetor"<<endl; 

//     for(int i =0 ; i < arr.size(); i++ ){
//         cout<<arr[i]<<" ";
//     }
// }

// Without using Vector

#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int arr[] = {6, 5, 1, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array
    sort(arr, arr + n);

    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

    