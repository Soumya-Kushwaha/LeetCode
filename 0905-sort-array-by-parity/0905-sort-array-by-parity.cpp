class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int j = 0;
        int n = nums.size();
        
        for (int i=0; i<n; i++){
            if (nums[i] % 2 == 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
        return nums;
    }
};