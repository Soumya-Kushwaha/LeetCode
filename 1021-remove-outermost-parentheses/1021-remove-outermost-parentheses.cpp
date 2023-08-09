class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int opened = 0;
        for (char c : s){
            if (c == '('){
                if (opened > 0)
                    ans += c;
                opened++;
            }
            else{
                if (opened > 1)
                    ans += c;
                opened--;
            }
        }
        return ans;
    }
};