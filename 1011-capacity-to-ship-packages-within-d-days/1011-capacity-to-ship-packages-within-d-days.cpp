class Solution {
public:
    int reqDays(vector<int>& weights, int capacity){
        int temp = 0, ans = 1;
        for (int i=0; i<weights.size(); i++){
            //
            if (temp + weights[i] > capacity){
                ans++;
                temp = weights[i];
            }
            else temp += weights[i];
            
        }
        return ans;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 25000000;
        for (int i=0; i<weights.size(); i++)
            low = max(low, weights[i]);

        while (low <= high){
            int mid = low + (high - low)/2;
            int daysReq = reqDays(weights, mid);
            if (daysReq > days)
                low = mid + 1;
            else high = mid - 1;
        }
        return low;        
    }
};