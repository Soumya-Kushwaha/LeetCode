class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != 0){
                nums[count] = nums[i];
                count++;
            }
        }
        for (int i=count; i<nums.size(); i++)
            nums[i] = 0;
    }
};