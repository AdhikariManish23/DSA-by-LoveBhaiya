#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& arr) {
    int n = arr.size() + 1; 
    int totalXOR = 0;
    
    
    for (int i = 1; i <= n; ++i) {
        totalXOR ^= i;
    }
    
    int arrXOR = 0;
    
   
    for (int num : arr) {
        arrXOR ^= num;
    }
    
   
    return totalXOR ^ arrXOR;
}

int main() {
    std::vector<int> arr = {3, 4, 1};
    int missingNumber = findMissingNumber(arr);
    
    std::cout << "The missing number is: " << missingNumber << std::endl;
    
    return 0;
}