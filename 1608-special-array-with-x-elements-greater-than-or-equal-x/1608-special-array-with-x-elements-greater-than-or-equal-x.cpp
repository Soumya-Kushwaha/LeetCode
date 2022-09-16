class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count[102] = { 0 }, N = nums.size();
        
        for (int n : nums) count[min(n, N)]++;
            for (int i = N; i >= 0; i--) {
                count[i] = count[i + 1] + count[i];
                if (count[i] == i) return i;
            }
        return -1;
    }
};