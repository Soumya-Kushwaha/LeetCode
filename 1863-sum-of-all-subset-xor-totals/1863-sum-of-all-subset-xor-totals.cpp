class Solution
{
public:
    int subsetXORSum(vector<int>& nums){
        int n = nums.size();
        int subsets = pow(2, n);
        int result = 0;
        
        // binary representation of subsets help us identify whether to take an element of num or not
        for (int subset = 1; subset < subsets; subset++){
            int xorr = 0;
            for (int i = 0, bits = subset; i < nums.size(); i++, bits >>= 1)
                if (bits & 1)   // whether to include current element in subset
                    xorr ^= nums[i];
            
            result += xorr;
        }
        
        return result;
    }
};