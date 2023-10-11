class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n = people.size();
        vector<int> start, end;
        
        // segregate start & end values in separate vectors
        for (auto it: flowers){
            start.push_back(it[0]);
            end.push_back(it[1]);
        }
        
        // sort the values to apply binary search
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        // blooming flowers - withered flowers
        vector<int> bloom(n, -1);
        for (int i=0; i<n; i++){
            int bloomStart = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
            int bloomEnd = lower_bound(end.begin(), end.end(), people[i]) - end.begin();
            bloom[i] = bloomStart - bloomEnd;
        }
        
        return bloom;
    }
};