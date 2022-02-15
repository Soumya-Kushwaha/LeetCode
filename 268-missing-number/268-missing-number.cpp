class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        const int N = n+2;
        int arr[N];
        for (int i=0; i<N; i++)
            arr[i] = -1;
        
        for (int i=0; i<n; i++)
            arr[nums[i]] = 0;
        
        for (int i=0; i<N; i++){
            if (arr[i] == -1)
                return i;
        }
        return 0;
    }
};