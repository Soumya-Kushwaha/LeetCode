class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mini = INT_MAX;

        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (nums[low] <= nums[high])
                return min(mini, nums[low]);

            else if (nums[low] <= nums[mid]){
                mini = min(mini, nums[low]);
                low = mid + 1;
            }

            else{
                mini = min(mini, nums[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
};