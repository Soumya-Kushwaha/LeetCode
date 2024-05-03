class Solution {
public:
    string frequencySort(string s) {
        
        string ans = "";
        
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>>pq;
        
        for(auto it : s){
            mp[it]++;
        }
        
        for(auto it : mp){
            pq.push({it.second, it.first});
        }
        
        while(!pq.empty()){
            auto temp = pq.top();
            int fre = temp.first;
            char c = temp.second;
            
            ans += string(fre, c);
            pq.pop();
        }
        
        return ans;
    }
};