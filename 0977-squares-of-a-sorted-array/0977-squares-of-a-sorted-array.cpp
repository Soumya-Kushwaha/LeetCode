class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);
        
        int left = 0;
        int right = n-1;
        
        for (int i=n-1; i>=0; i--){
            if (abs(nums[left]) < abs(nums[right])){
                ans[i] = (nums[right] * nums[right]);
                right--;
            }
            else{
                ans[i] = nums[left] * nums[left];
                left++;
            }
        }
        
        return ans;
    }
};