class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> s;
        vector<int> v(n, -1);
        
        for (int i=2*n-1; i>=0; i--){
            
            while (!s.empty() && nums[i%n] >= s.top())
                s.pop();
            
            if (s.empty())
                s.push(nums[i%n]);
            
            else if (!s.empty() && nums[i%n] < s.top()){
                v[i % n] = s.top();
                s.push(nums[i%n]);
            }
        }
        return v;
    }
};