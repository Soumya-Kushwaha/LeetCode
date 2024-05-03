class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        
        for (auto it : nums)
            mp[it]++;
        
        for (auto it : mp)
            pq.push({it.second, it.first});
        
        while (!pq.empty() && k!=0){
            
            auto temp = pq.top();
            pq.pop();
            
            int num = temp.second;
            ans.push_back(num);
            
            k--;
        }
        
        return ans;
    }
};