class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        if (nums.size() < 1)
            return 0;
        
        else if (nums.size() > 1){
            int n = nums.size();
            sort(nums.begin(), nums.end());

            for (int i=0; i<n; i=i+2){
                if (nums[i] != nums[i+1])
                    return nums[i];
            }
        }
        return nums[0];
    }
};