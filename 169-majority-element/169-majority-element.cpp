class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        
        /*int n = nums.size();
        int count = 0;
        int max = INT_MIN;
        
        for (int i=0; i<n-1; i++){
            if (nums[i] == nums[i+1])
                count++;
            if (count > max){
                max = count; 
            }
        }
        return max;
        */
    }
};