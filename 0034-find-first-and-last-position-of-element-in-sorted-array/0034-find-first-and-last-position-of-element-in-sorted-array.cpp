class Solution {
public:
    int firstIndex(vector<int>& nums, int n, int target){
        
        int low = 0, high = n-1, first = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target) 
                low = mid + 1;
            else
                high = mid - 1;
        }
        return first;
    }
    
    int lastIndex(vector<int>& nums, int n, int target){
        
        int low = 0, high = n-1, last = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstIndex(nums, nums.size(), target);
        int last = lastIndex(nums, nums.size(), target);
        return {first, last};
    }
};