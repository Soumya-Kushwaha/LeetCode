class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = -1;
        for(int i=0; i<nums.size(); i++)
            if (nums[i] == 0){
                x = i;
                break;
            }
        
        if (x == -1)
            return;
        
        for (int i=x+1; i<nums.size(); i++){
            if (nums[i] != 0){
                swap(nums[i], nums[x]);
                x++;
            }
        }
        
    }
};