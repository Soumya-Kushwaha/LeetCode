class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        vector<int> greater(n, -1);
        stack<int> st;
        
        for (int i=n-1; i>=0; i--){
            while (!st.empty() && nums2[i] >= st.top())
                st.pop();
            
            if (!st.empty())
                greater[i] = st.top();
            
            st.push(nums2[i]);
        }
        
        int m = nums1.size();
        vector<int> ans(m, -1);
        
        unordered_map<int, int> mp;
        for (int i=0; i<n; i++)
            mp[nums2[i]] = i;
        
        for (int i=0; i<m; i++)
            ans[i] = greater[mp[nums1[i]]];
        
        return ans;
    }
};