class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int temp = -1;
        for (int i=n-1; i>0; i--){
            if (nums[i] > nums[i-1]){
                temp = i-1;
                break;
            }
        }
        if (temp == -1)
            reverse(nums.begin(), nums.end());
        else{
            for (int i=n-1; i>temp; i--){
                if (nums[i] > nums[temp]){
                    swap(nums[i], nums[temp]);
                    break;
                }
            }
            reverse(nums.begin() + temp + 1, nums.end());      
        }
    }
};