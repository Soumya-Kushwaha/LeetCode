/*class Solution {
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
*/

class Solution{
public:
    int missingNumber(vector<int>&nums){
        int n = nums.size();
        if (n==1){
            if (nums[0] == 0)
                return 1;
            else return 0;
        }
        
        if (n>1){
            sort(nums.begin(), nums.end());
            if (nums[0] != 0)
                return 0;
            int i=1;
            
            while (i<=n-1){
                if (nums[i] - nums[i-1] == 2)
                    return nums[i-1]+1;
                i++;
            }
        }
        return nums[n-1] + 1;
    }
};