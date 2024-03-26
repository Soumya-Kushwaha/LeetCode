class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = size(nums);
        for (int j = 0; j < 5; j++)
            for (int i = 0; i < n; i++) {
                int x = nums[i];
                if (x >= 1 && x <= n) {
                    swap(nums[x - 1], nums[i]);
                }
            }

        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};