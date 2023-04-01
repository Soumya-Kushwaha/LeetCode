class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        
        while (low <= high){
            if (nums[low] == target)
                return low;
            
            else if (nums[low] > target)
                high--;
            
            else low++;
        }
        return -1;
    }
};