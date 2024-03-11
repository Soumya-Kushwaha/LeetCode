class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char, int> mp;
        
        for (auto it: s)
            mp[it]++;
        
        string ans = "";
        for (auto it : order){
            while (mp[it] > 0){
                ans += it;
                mp[it]--;
            }
        }
        
        for (auto it: mp){
            if (it.second){
                while (it.second--)
                    ans += it.first;
            }
        }
        
        return ans;
    }
};