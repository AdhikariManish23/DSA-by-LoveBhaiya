#include <iostream>
using namespace std;

int sum(int x, int y, int z){
    int c = x + y + z ;
    return c;
}

int sub(int x, int y){
    int d= x - y;
    return d;
}
int mul(int x, int y){
    int g= x * y;
    return g;
}

int main(){

    int a = 12;
    int b = 12;
    int f = 6 ;
    int d = 20;
    int e = 30;

    int add = sum(a,f,f);
    int add1 = sub(d,e);
    int mul1 = mul(a,f);
    cout << add << endl;
    cout << add1 << endl;
    cout << mul1 << endl;

    return 0;
}