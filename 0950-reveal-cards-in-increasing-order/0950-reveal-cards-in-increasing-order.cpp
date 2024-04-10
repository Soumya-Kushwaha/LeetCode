class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        sort(deck.begin(),deck.end());
        int n = deck.size();
        
        queue<int> q;
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            q.push(i);
        }
        
        int temp;
        for(int i = 0; i < n; i++){
            temp = q.front();
            q.pop();
            ans[temp] = deck[i];
            
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        return ans;   
    }
};