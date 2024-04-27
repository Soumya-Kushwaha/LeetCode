class Solution {
public:
    
    int m, n;
    string r, k;
    unordered_map<char, vector<int>> pos;
    int dp[101][101];
    
    int findRotateSteps(string ring, string key) {
        r = ring, k = key;
        m = r.size(), n = k.size();
        memset(dp, -1, sizeof(dp));
        
        for(int i = 0; i < r.size() ; i++){
            pos[r[i]].push_back(i);
        }
        
        return solve(0, 0);
    }

    int solve(int rind, int kind){
        
        if(kind == n) return 0;
        if(dp[rind][kind] != -1) 
            return dp[rind][kind];

        int ans = INT_MAX;

        for(auto ind : pos[k[kind]]){
            int dist1 = abs(ind - rind);
            int dist2 = m - dist1;
            ans = min(ans, min(dist1, dist2) + 1 +solve(ind, kind+1));
        }
        
        return dp[rind][kind] = ans;
    }
};