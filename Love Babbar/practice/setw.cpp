#include<iostream>
#include<iomanip>
using namespace std;
 int main(){
    int a=6, b=35 ,c=22567;
    //with setw manipulator
    cout<<"The value of a is:" <<setw(5)<<a<<endl;
    cout<<"The value of b is:" <<setw(5)<<b<<endl;
    cout<<"The value of c is:" <<setw(5)<<c<<endl;
    //without setw manipulator
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    cout<<"The value of c is:"<<c<<endl;
    return 0;

 }