#include<iostream>
using namespace std;
int main(){
    // using For Loop
    cout<<"Counting using For Loop"<<endl;
    for (int i = 0; i <=10; i++) {
        if(i==5)
        continue;
        cout<<i<<endl;
    }
    //using While Loop  
     cout<<"coutning using While Lopp"<<endl;
    int i=10;
     while(i<=20){
        i++;
       
        cout<<i<<endl;
     }   
    
}