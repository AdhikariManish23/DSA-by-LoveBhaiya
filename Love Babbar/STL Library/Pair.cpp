#include<iostream>
using namespace std;
    
    int main(){
    
    pair<int, int> p  = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    p.first = 3;
    p.second = 4;

    cout<<p.first<<" "<<p.second<<endl;

    pair < int , pair < int , int >> p1 = {1,{2,3}};

    cout << p1.first << " " << p1.second.second << " " << p1.second.first <<endl;
    
    pair < int , int > arr[] = {{1,2} , {2,3} , {3,4} , {4,5}};
    
    cout<<"Printing Single Element of the Array"<<endl;
    //printing the single element
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    
    cout<<"Printing the Whole Array "<<endl;
    // printing the array
    for (int i = 0; i < 4; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }


    return 0;

}