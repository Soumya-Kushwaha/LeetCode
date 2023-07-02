class Solution {
public:
    int sumDivision(vector<int>& nums, int num){
        int ans = 0;
        for (int i=0; i<nums.size(); i++)
            ans += ceil((double)nums[i]/(double)num);
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        
        for (int i=0; i<nums.size(); i++)
            maxi = max(maxi, nums[i]);

        int low = 1, high = maxi;
        while (low <= high){
            int mid = low + (high - low)/2;

            int sum = sumDivision(nums, mid);
            if (sum <= threshold)
                high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};