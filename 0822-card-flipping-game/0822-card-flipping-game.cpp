class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        set<int> st;
        int n = fronts.size();
        
        for (int i=0; i<n; i++){
            if (fronts[i] == backs[i])
                st.insert(fronts[i]);
        }
        
        int ans = INT_MAX;
        for (int i=0; i<n; i++){
            if (st.find(fronts[i]) == st.end()){
                ans = min(ans, fronts[i]);
            }
            if (st.find(backs[i]) == st.end()){
                ans = min(ans, backs[i]);
            }
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};