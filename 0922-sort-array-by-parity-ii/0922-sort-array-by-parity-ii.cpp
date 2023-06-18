class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        
        for (int i=0; i<n; i++){
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else if (nums[i] % 2 != 0)
                odd.push_back(nums[i]);
        }
        
        for (int i=0; i<n/2; i++){
            nums[2*i] = even[i];
            nums[2*i+1] = odd[i];
        }
        return nums;
    }
};