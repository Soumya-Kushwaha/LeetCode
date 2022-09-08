class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

/*
    Sort the array.
    Since the majority element appears n/2 times, it will appear at n/2th position.
    So return nums[n/2th position]
*/