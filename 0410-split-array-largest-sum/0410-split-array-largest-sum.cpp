class Solution {
public:
    
    int subarrayCount(vector<int>& nums, int mid){
        int subarray = 1, subarraySum = 0;
        for (int i=0; i<nums.size(); i++){
            if (subarraySum + nums[i] <= mid)
                subarraySum += nums[i];
            else{
                subarray++;
                subarraySum = nums[i];
            }
        }
        return subarray;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN, high = 0;
        for (int i=0; i<nums.size(); i++){
            low = max(low, nums[i]);
            high += nums[i];
        }
        
        while (low <= high){
            int mid = low + (high - low)/2;
            int subarrays = subarrayCount(nums, mid);
            if (subarrays <= k)
                high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};