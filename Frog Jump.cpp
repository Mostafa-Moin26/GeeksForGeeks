// Problem link ---->
https://www.geeksforgeeks.org/problems/geek-jump/1

// Solution ---->
class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        int dp[n] = {0};
        
        dp[0] = 0;
        
        for (int i = 1; i < n; i++) {
            
            int ff = dp[i - 1] + abs(height[i] - height[i - 1]);
            int ss = INT_MAX;
            if (i > 1) ss = dp[i - 2] + abs(height[i] - height[i - 2]);
            
            dp[i] = min(ff, ss);
        }
        
        return dp[n - 1];
    }
};