class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] % 2 == 0)
                mp[nums[i]]++;
        }
        int maxCount = -1, mostFrequentElement = -1;
        for (auto it: mp){
            if (it.second > maxCount){
                maxCount = it.second;
                mostFrequentElement = it.first;
            }
        }
        return mostFrequentElement;
    }
};