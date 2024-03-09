class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;
        
        for (int i=0; i<nums1.size(); i++){
            mp[nums1[i]] = 1;
        }
        
        for (int i=0; i<nums2.size(); i++){
            if (mp.find(nums2[i]) != mp.end()){
                mp[nums2[i]] = 2;
            }
        }
        
        int ans = INT_MAX;
        for (auto it : mp){
            if (it.second == 2)
                ans = min(ans, it.first);
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};