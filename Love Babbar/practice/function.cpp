#include<iostream>
using namespace std;

int sub( int x , int y , int z){
    int c = x + y + z;
    return c;
}
// int sum( int x , int y )
// {
//     if( x > y )
//         return x;
//     else
//         return y;
// }
// int max(int x, int y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

    int main(){
    //     int a=56;
    //     int b=89;
    //     int g=sum( a , b );
    // cout<<"The value of g is "<<g<<endl;
    int a = 10;
    int b = 20;
    int c = 30;

    int gap = sub( a , b ,c);
    cout<<"The value is "<<gap<<endl;
    
}