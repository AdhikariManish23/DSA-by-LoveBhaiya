#include<iostream>
using namespace std;
    int sum (int x,int y,int z){
        int c = x + y + z;
        return c;
    }
    int sub (int x, int y){
        int z =x-y;
        return z;
    }  


    int main(){
        int a ,b ,d;
        cout<<"the \"Value\" of a is :"<<endl;
        cin>>a;
        cout<<"the value of b is :"<<endl;
        cin>>b;
        cout<<"the value of d is :"<<endl;
        cin>>d;

        cout<<"The sum are :"<<endl;
        int add = sum (a,b,d);
        cout<<add<<endl;
        cout<<"the subtraction is"<<endl;
        int less = sub (a , b);
        cout<<less; 

    return 0;   


}