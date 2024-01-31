class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int breakpoint = -1;
        int n = nums.size();
        
        // traverse from end of array to find breakpoint (where arr[i] < arr[i+1])
        
        for (int i=n-2; i>=0; i--){
            if (nums[i+1] > nums[i]){
                breakpoint = i;
                break;
            }
        }
        
        // if given array is last permutation, simply reverse it to get first permutation
        
        if (breakpoint == -1)
            reverse(nums.begin(), nums.end());
        
        // else swap the breakpoint with next highest value & reverse the entire right half.
        
        else{
            for (int i=n-1; i>breakpoint; i--){
                
                if (nums[i] > nums[breakpoint]){
                    
                    swap(nums[breakpoint], nums[i]);
                    reverse(nums.begin()+breakpoint+1, nums.end());
                    break;
                
                }
            }
        }
    }
};