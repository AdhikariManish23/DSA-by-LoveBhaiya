#include<iostream>
using namespace std;
 int main(){
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;

    switch (age){
    case 18:
       cout<<"You are able to drive car ";    
        break;

    case 19:
        cout<<"You can drink alcohol ";
        break;

    default:
        cout<<"They can marry ";
        break;
    }
 }