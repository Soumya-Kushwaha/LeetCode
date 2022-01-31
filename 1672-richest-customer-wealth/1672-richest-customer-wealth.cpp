class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int maxi = 0;
        
        for (int i=0; i<m; i++){
            int n = accounts[i].size();
            int sum = 0;
            
            for (int j = 0; j<n; j++){
                sum += accounts[i][j];
            }
            
            if (sum > maxi)
                maxi = sum;
        }
        return maxi;
    }
};