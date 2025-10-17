#include<iostream>
using namespace std;
    //what is pointer?--data type which holds the address of other data type.
    //pointers single*
    int main(){
    int a=5;
    int* b=&a;
    cout<<"the addresss of a is "<<&a<<endl;
    cout<<"the addresss of a is "<<b<<endl;
    cout<<"the value of a is "<<*b<<endl;
    //Double Pointers**
    int**c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of c is "<<*c<<endl;
    cout<<"The value of c is "<<**c<<endl;

}