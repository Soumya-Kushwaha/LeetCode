class Solution {
public:
    int startIndex(vector<int>& nums, int target) {
        int first = -1;
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else high = mid - 1;
        }
        return first;
    }

    int endIndex(vector<int>& nums, int target) {
        int last = -1;
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
                low = mid + 1;
            else high = mid - 1;
        }
        return last;            
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int first = startIndex(nums, target);

        if (first != -1){
            int last = endIndex(nums, target);
            ans[0] = first;
            ans[1] = last;
        }
        return ans;
    }
};