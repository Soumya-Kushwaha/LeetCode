class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        // sort(rbegin(cost), rend(cost));
        
        int sum = 0;
        for (int i=0; i<cost.size(); i++)
            sum += (i % 3) == 2 ? 0 : cost[i];
        
        
        return sum;
    }
};