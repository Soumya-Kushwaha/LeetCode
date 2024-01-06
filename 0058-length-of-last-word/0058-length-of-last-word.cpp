class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int count = 0;
        
        // ignore trailing whitespaces
        for (; i>=0 && s[i] == ' '; i--);
            
        // traverse till you find a whitespace!
        for (; i>=0 && s[i] != ' '; i--)
            count++;
        
        return count;
    }
};