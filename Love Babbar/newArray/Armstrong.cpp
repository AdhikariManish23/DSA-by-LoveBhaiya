#include<iostream>
using namespace std;
   
   
    int main(){
        int n = 153;
        int r , c ,arm;

        c = n;
        arm = 0;
    while ( n> 0 ){
  
    r = n%10;
    arm = (r*r*r)+arm;
    n = n/10;
}
    if ( c==arm){
    cout<<"true";
}
    else{
    cout<<"false";
}
    cout<<endl;
     return 0;
}