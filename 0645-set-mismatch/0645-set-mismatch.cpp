class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int n = nums.size();
        
        vector<bool> check(n+1, 0);
        int xorr1 = 0, xorr2 = 0;
        int duplicate, missing;
        
        for (int i=0; i<n; i++){
            xorr1 ^= nums[i];
            xorr2 ^= i+1;
            if (check[nums[i]] == 1)
                duplicate = nums[i];
            else check[nums[i]] = 1;
        }
            
        missing = ((xorr1 ^ xorr2) ^ duplicate);
        return {duplicate, missing};
    }
};