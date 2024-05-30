class Solution {
public:
    int climbStairs(int n) {
        
        int prev = 1, prev2 = 1;
        
        for (int i=2; i<=n; i++){
            int curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
};