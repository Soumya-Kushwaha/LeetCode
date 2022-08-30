class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product = 1;
        for (int i = 0; i < nums.size(); i++){
            product *= nums[i];
        
            if (product > 0)
                product = 1;
            else if (product < 0)
                product = -1;
            else product = 0;
        }
        return product;
    }
};