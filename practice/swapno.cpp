// #include<iostream>
// using namespace std;

// int swapNum(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 5 , b = 4;
//     swapNum(&a , &b);
//     cout<<a<<endl<<b;
//     }

#include<bits/stdc++.h>
using namespace std;
    


    int main(){
    
        int a = 10;
        int b = 20;

        a = a^b;
        b = a^b;
        a = a^b;

        cout << "a = " << a;
        cout << "b = " << b;
     return 0;
}