class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();    
        for (int i=0; i<n; i++){
            if (nums[i] == 0)
                nums[i] = -1;
        }
        
        unordered_map<int, int> preSum(n);
        preSum[0] = -1;
        int sum = 0, maxx = 0;
        
        for (int i=0; i<n; i++){
            sum += nums[i];
            if (preSum.find(sum) != preSum.end()){
                maxx = max(maxx, i - preSum[sum]);
            }
            else{
                preSum[sum] = i;
            }
        }
        return maxx;
    }
};