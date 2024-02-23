class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        
        for (int j=0; j<n; j++){
            if (i == 0 || i == 1 || nums[i-2] != nums[j]){
                nums[i] = nums[j];
                i++;
            }
        }
        
        return i;
    }
};