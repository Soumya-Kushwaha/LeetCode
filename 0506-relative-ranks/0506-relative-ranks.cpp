class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int,int>>q;
        
        for(int i=0;i<score.size();i++)
            q.push({score[i],i});
        
        int i=0;
        vector<string>ans(q.size());
        
        while(!q.empty()){
            string temp = i==0 ? "Gold Medal" : i==1 ? "Silver Medal" : i==2 ? "Bronze Medal" :to_string(i+1);
            ans[q.top().second] = temp;
            i++;
            q.pop();
        }
        
        return ans;
    }
};