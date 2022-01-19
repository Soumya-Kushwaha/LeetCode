class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, result=0;
        
        int len = sizeof(nums)/sizeof(nums[0]);
        
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0)
                count=0;
            
            else{
                count++;
                result = max(result, count);
            }
        }
        return result;
    }
};