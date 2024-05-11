class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        
        vector<vector<double>> workers;
        
        for(int i=0; i<quality.size(); i++)
            workers.push_back({ (double) (wage[i]) / quality[i], (double) quality[i]});
        
        sort(workers.begin(), workers.end());
        
        double ans = DBL_MAX, sum = 0;
        priority_queue<int> pq;
        
        for (auto worker : workers){
            sum += worker[1];
            pq.push(worker[1]);
            
            if (pq.size() > k){
                sum -= pq.top();
                pq.pop();
            }
            
            if (pq.size() == k)
                ans = min(ans, sum * worker[0]);
        }
        
        return ans;
    }
};