class Solution {
public:
    int minimumLength(string s) {
        
        int n = s.size();
        int left = 0, right = n-1;
        
        while (left < right && s[left] == s[right]) {
            
            auto ch = s[left];
            while (left <= right && s[left] == ch)
                left++;
            
            while (left <= right && s[right] == ch)
                right--;
        }
        return right - left + 1;
    }
};