#include<iostream>
using namespace std;
    int main(){
    // Question 1
    // this is  a Lower case if (a to z)
    // this is a upper case if (A to Z)
    // this is a integer if (0 to9);
    char input;
    cout<<"Enter the character"<<endl;
    cin>>input;
    if (input>='a' && input<='z')
    {
        cout<<"it is a lower case";
    }
    else if (input>='A' && input<='Z')
    {
        cout<<"it is a upper case";
    }
    else{
        cout<<"it is a integer";
    }
    
    
     return 0;
}