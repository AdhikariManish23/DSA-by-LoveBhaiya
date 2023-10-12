#include<iostream>
using namespace std;

    // By this algo you get sqaure root in integers not in decimal form
    int SqrInteger(int n){
        int s = 0;
        int e = n;
        int mid = s + ( e - s )/2 ;
        int ans = -1;

        while(s<=e){
            int square = mid*mid;
            if(square == n){
                return mid;
            }
            else if ( square < n){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    // by this you can also get decimal value
    double MorePrecision(int n , int precision, int tempsol){
        double factor = 1;
        double ans = tempsol;

        for(int i = 0 ; i < precision; i++){
            factor = factor/10;
            for( double j = ans; j * j < n ; j = j + factor ){
                ans = j;
            }
        }
        return ans;
    }
    int main(){
    
    int n;
    cout<<"Enter the value : "<<endl;
    cin>>n;
    
    int tempsol = SqrInteger(n);
    cout<<"Square root of "<<n<<" is : "<<MorePrecision(n,3,tempsol);

     return 0;
}