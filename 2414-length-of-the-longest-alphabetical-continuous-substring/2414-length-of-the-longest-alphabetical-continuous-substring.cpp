class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=0, count = 1;
        
        for (int i=1; i<s.size(); i++){
            
            // if diff between ascii of 2 consecutive characters == 1
            if ((s[i]-'a') - (s[i-1]-'a') == 1)
                count++;
            
            // else calculate max
            else{
                ans = max(count, ans);
                count = 1;
            }
        }
        
        ans = max(count, ans);
        return ans;
    }
};