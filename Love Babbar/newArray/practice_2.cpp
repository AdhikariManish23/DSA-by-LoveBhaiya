#include <iostream>
using namespace std;
/* counting excluding number which divide is by 5*/
int main() {
    int n;
    cout<<"Enter the value:";
    cin>>n;
    int i =1;
    while(i<= n){
        if( i%5 != 0){
            cout<<i <<endl;
        }
        i++;
    }
}
