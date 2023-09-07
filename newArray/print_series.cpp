#include<iostream>
using namespace std;
    int main(){
    
    /* 1 4 9 16 25 36 49 64 */

    int n;
    cin>>n;
    int i = 1;
    while( i * i <=n ){
        cout<< i * i << endl;
        i++;
    }
     return 0;
}