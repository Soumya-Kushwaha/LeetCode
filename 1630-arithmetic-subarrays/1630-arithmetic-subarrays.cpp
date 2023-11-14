class Solution {
public:
    
    bool calc(vector<int>& nums, int left, int right){
        vector<int> temp;
        for (int i=left; i<=right; i++)
            temp.push_back(nums[i]);
        
        sort(temp.begin(), temp.end());
        
        int diff = temp[1] - temp[0];
        for (int i=1; i<temp.size(); i++)
            if (temp[i] - temp[i-1] != diff)
                return false;
        
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        
        for (int i=0; i<l.size(); i++){
            int left = l[i];
            int right = r[i];
            
            ans.push_back(calc(nums, left, right));
        }
        return ans;
    }
};