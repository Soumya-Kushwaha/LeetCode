class Solution {
public:
    int firstUniqChar(string s) {
        int check[26] = {0};
        
        for (int i=0; i<s.size(); i++)
            check[s[i] - 'a']++;
        
        for (int i=0; i<s.size(); i++)
            if (check[s[i] - 'a'] == 1)
                return i;
        
        return -1;
    }
};