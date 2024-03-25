class Solution{
public:
    vector<int> findDuplicates(vector<int>& nums){
        int n = nums.size();
        
        if (n == 0)
            return {};
        
        vector<int> ans;
        
        for (int i=0; i<n; i++){
            if (nums[abs(nums[i]) - 1] < 0)
                ans.push_back(abs(nums[i]));
            else
                nums[abs(nums[i]) - 1] *= -1;
        }
        
        return ans;
    }
};

/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> check(n+1, 0);
        
        for (int i=0; i<n; i++){
            check[nums[i]]++;
        }
        
        vector<int> ans;
        for (int i=1; i<=n; i++){
            if (check[i] > 1)
                ans.push_back(i);
        }
        
        return ans;
    }
};
*/