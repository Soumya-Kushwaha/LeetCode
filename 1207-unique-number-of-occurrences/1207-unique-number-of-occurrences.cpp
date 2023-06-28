class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> st;
        
        for (int i=0; i<arr.size(); i++)
            mp[arr[i]]++;
        
        for (auto it: mp){
            if (st.find(it.second) != st.end())
                return false;
            st.insert(it.second);
        }
        return true;
    }
};