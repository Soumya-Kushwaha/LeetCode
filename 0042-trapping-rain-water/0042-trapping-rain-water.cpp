class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int left_sub_max[n];
        int right_sub_max[n];
        int water[n];
        int ans = 0;
        
        // we find maximum in left subarray for each building
        left_sub_max[0] = height[0];
        
        for (int i=1; i<n; i++)
            left_sub_max[i] = max(left_sub_max[i-1], height[i]);
            
        // and maximum in right subarray for each building
        right_sub_max[n-1] = height[n-1];
        
        for (int i=n-2; i>=0; i--)
            right_sub_max[i] = max(right_sub_max[i+1], height[i]);
                
        for (int i=0; i<n; i++){
            
            // calculate water on top of each building
            water[i] = (min(left_sub_max[i], right_sub_max[i]) - height[i]);    
        }
        
        for (int i=0; i<n; i++)
            ans += water[i];
        
        return ans;
    }
};