
/* Question -- Aggressive Cows */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); ///nhi smjh aayaa
    int s = 0;
    int n = stalls.size();
    int e = stalls[n - 1]; ///// nhi smjh aayaa
    int ans = -1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        if (isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> stalls = {4,2,1,3,6};  //// nhi smjh aayaa
    int k = 2;
    
    int result = aggressiveCows(stalls, k);
    
    cout << "Maximum largest distance: " << result << endl;
    
}


