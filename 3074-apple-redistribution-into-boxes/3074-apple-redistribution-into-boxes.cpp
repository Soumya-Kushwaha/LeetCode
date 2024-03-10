class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int n = apple.size();
        int m = capacity.size();
        
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        long long totalApples = 0;
        
        for (int i=0; i<n; i++)
            totalApples += apple[i];
        
        long long count = 0;
        
        for (int i=0; i<m; i++){
            if (totalApples > 0){
                totalApples -= capacity[i];
                count++;
            }
        }
        
        return count;
    }
};