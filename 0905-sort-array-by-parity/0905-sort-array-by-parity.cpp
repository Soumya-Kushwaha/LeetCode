class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd, even;

        for (int i=0; i<n; i++){
            if (nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else 
                odd.push_back(nums[i]);
        }
        
        for (int i=0; i<even.size(); i++)
            nums[i] = even[i];   

        for (int i=0; i<odd.size(); i++)
            nums[i + even.size()] = odd[i];
        
        for(int i=0; i<n; i++)
            cout << nums[i]; 

        return nums;
    }
};