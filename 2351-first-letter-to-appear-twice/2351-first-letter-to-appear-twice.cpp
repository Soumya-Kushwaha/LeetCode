class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> ans(26);
        
        for (char c: s){
            if (ans[c - 'a'])
                return c;
            ans[c - 'a'] = true;
        }
        return 'a';
    }
};