class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int m = arr.size();
        vector<int> prev = arr[0], cur = arr[0];
        
        for (int i = 1; i < m; ++i) {
            int first = INT_MAX, second = INT_MAX;
            for (int j = 0; j < m; ++j) {
                if (prev[j] < first) {second = first; first = prev[j];}
                else if (prev[j] < second) second = prev[j];
            }
            for (int j = 0; j < m; ++j) {
                cur[j] = arr[i][j] + (prev[j] == first ? second : first);
            }
            prev = cur;
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < m; ++i) 
            ans = min(ans, prev[i]);
        
        return ans;
    }
};