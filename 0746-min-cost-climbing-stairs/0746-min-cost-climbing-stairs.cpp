class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
        
        // dp[0] = cost[0], dp[1] = cost[1];
        
        for (int i=2; i<=n; i++){
            int jumpOne = cost[i-1] + dp[i-1];
            int jumpTwo = cost[i-2] + dp[i-2];
            dp[i] = min(jumpOne, jumpTwo);
        }
        
        return dp[n];
    }
};