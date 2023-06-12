class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto it: nums1)
            mp[it]++;

        for (auto it: nums2)
            if (mp[it]){
                mp[it] = false;
                ans.push_back(it);
            }

        return ans;
    }
};