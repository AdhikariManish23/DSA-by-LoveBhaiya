#include<bits/stdc++.h>
using namespace std;

    bool hasAlternatingBits(int n) {
        vector<int> v;
        while(n){
            int rem = n%2;
            v.push_back(rem);
            n/=2;
        }
      /*

    Explanation of above while Loop

      Suppose n is initially 13.

Iteration 1:

n is 13.
Calculate remainder: rem = 13 % 2 (rem will be 1)
Push rem (1) to vector v.
Update n: n = n / 2 (n will be 6).
Iteration 2:

n is 6.
Calculate remainder: rem = 6 % 2 (rem will be 0)
Push rem (0) to vector v.
Update n: n = n / 2 (n will be 3).
Iteration 3:

n is 3.
Calculate remainder: rem = 3 % 2 (rem will be 1)
Push rem (1) to vector v.
Update n: n = n / 2 (n will be 1).
Iteration 4:

n is 1.
Calculate remainder: rem = 1 % 2 (rem will be 1)
Push rem (1) to vector v.
Update n: n = n / 2 (n will be 0).
Iteration 5:

n is now 0, so the loop terminates.
      */
        for(int i = 1 ; i< v.size(); i++){
            if(v[i-1] == v[i]){
                return false;
            }
        }
        return true;
    }



    int main(){
        int n;
        cout<<"Enter the value ";
        cin>>n;
        int print = hasAlternatingBits(n);
        cout<<print;
    }
