#include<bits/stdc++.h>
using namespace std;

bool isbadnumber(int num) {
    int sum = 0;
    int originalnum = num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return (originalnum % sum == 0);
}

vector<int> badnumber(int n) {
    
vector<int> arr;

    int currentNumber = 10;
   

    while (n > 0) {
        if (isbadnumber(currentNumber)) {
            arr.push_back(currentNumber);
        
            
            n--; 
        }
        currentNumber++;
    }

    return arr;
}

int main() {
    int n = 7; 
    vector<int> badNumbers = badnumber(n);

    cout << "First " << n << " bad numbers: ";
    for (int i = 0; i < badNumbers.size(); i++) {
        cout << badNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}