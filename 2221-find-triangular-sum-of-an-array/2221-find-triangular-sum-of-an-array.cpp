class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> temp;
        while (nums.size() > 1){
            for (int i=1; i<nums.size(); i++)
                temp.push_back((nums[i-1] + nums[i]) % 10);
            nums = temp;
            temp.clear();
        }
        return nums[0];
    }
};