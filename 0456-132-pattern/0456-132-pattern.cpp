class Solution {
public:
    
    bool NGEVariation(vector<int> &leftmin, vector<int>arr, int n){
         stack<int> s;
        
         for(int i=n-1; i>=0; i--){
             while(s.empty() == false && leftmin[i] >= s.top()){
                 s.pop();
             }
             
             if(s.empty() == false && leftmin[i] < arr[i] && arr[i] > s.top()){
                 return true;
             }
             
             s.push(arr[i]);
         }
         return false;
    }
    
    
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftmin(n,0);
        
	    leftmin[0] = nums[0];
	    for(int i=1; i<n; i++){
	        leftmin[i] = min(nums[i], leftmin[i-1]);
	    }
        
	    return NGEVariation(leftmin, nums, n);
    }
};