#include<bits/stdc++.h>
using namespace std;

    // Method 1

    static int countBit(int n)
    {
        int cnt = 0 ;
        while(n)
        {
            n = n & (n - 1);
            cnt++;
        }
        return cnt ;
    }

    static bool comp(int x, int y)
    {   
        int bitCountX = countBit(x);
        int bitCountY = countBit(y);
        
        if (bitCountX == bitCountY) 
            return x < y;

        return bitCountX < bitCountY;
    }
    
    vector<int> sortByBits(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end(),comp) ;

        return arr ;
    }

    //Method 2

    #include <vector>
    #include <algorithm>

    class Solution {
    public:
    vector<int> sortByBits(vector<int>& arr) {
        // Custom comparator function to sort based on the number of set bits
        auto countBits = [](int num) {
            int count = 0;
            while (num) {
                count += num & 1;
                num >>= 1;
            }
            return count;
        };

        // Sorting the vector using custom comparator
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int countA = countBits(a);
            int countB = countBits(b);

            // If the count of set bits is equal, sort by the actual value
            if (countA == countB) {
                return a < b;
            }

            return countA < countB;
        });

        return arr;
    }
};

    int main(){
    

     return 0;
}