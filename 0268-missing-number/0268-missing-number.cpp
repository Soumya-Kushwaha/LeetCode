class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        xor2 ^= nums.size();
        
        for (int i=0; i<nums.size(); i++){
            xor1 ^= nums[i];
            xor2 ^= i;
        }
        
        return (xor1 ^ xor2);
    }
};