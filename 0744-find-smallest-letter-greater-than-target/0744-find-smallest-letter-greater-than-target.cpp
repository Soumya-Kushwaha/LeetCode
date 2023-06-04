class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;

        if (letters[right] <= target) 
            return letters[0];

        while (left < right){
            int mid = left + (right - left)/2;

            if(target < letters[mid])
                right = mid;
            else left = mid + 1;
        }
        return letters[left];
    }
};