// #include <iostream>
// #include <vector>

// int maximumWealth(std::vector<std::vector<int>>& accounts) {
//     int maxWealth = 0;

//     for (const std::vector<int>& customerAccounts : accounts) {
//         int wealth = 0;
//         for (int account : customerAccounts) {
//             wealth += account;
//         }
//         maxWealth = std::max(maxWealth, wealth);
//     }

//     return maxWealth;
// }



//alternate method

// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         int m=accounts.size();
//     int n=accounts[0].size();
//     int wealth=0;
//     for(int i=0;i<m;i++)
//     {
//         int curr_wealth=0;
//         for(int j=0;j<n;j++)
//         {
//             curr_wealth+=accounts[i][j];
//         }
//         wealth=max(curr_wealth,wealth);
//     }
//     return wealth;
//     }
// };