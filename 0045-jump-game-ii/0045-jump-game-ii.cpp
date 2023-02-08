class Solution {
public:
    int jump(vector<int>& nums) {
        int answer = 0;
        int n = nums.size();

        int currEnd = 0, currFar = 0;

        for (int i=0; i < n-1; i++){
            currFar = max(currFar, nums[i] + i);

            if (i == currEnd){
                answer++;
                currEnd = currFar;
            }
        }
        return answer;
        
    }
};