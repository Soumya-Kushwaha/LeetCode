class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int res = 0;
        for (int i=0; i<s.size(); i++)
            res = res ^ s[i];
        
        for (int i=0; i<t.size(); i++)
            res = res ^ t[i];
        
        return res;
    }
};