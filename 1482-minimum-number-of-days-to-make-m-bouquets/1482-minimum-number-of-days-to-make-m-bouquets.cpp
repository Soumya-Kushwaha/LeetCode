class Solution {
public:
    
    int waitDays(vector<int>& bloomDay, int day, int k){
        int count = 0, bouquets = 0;
        for (int i=0; i<bloomDay.size(); i++){
            if (bloomDay[i] <= day){
                count++;
            }
            else{
                bouquets += (count/k);
                count = 0;
            }
        }
        bouquets += (count/k);
        cout << bouquets;
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = 1LL*m*k; // without LL(long long), it will denote int & not long long.
        
        if (n < val)
            return -1; // total flowers less than required
        
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i=0; i<n; i++){
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        
        int low = mini, high = maxi;
        
        while (low <= high){
            int mid = low + (high - low)/2;
            
            int bouquets = waitDays(bloomDay, mid, k);
            
            if (bouquets >= m)
                high = mid - 1;
            else low = mid + 1;
        }
        if (low >= m)
            return low;
        else return -1;
    }
};