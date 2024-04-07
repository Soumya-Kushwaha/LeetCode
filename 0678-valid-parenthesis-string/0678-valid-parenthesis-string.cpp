// We count the number of ')'
// This number will be in a range and we count it as [cmin, cmax]

// cmax counts the maximum open parenthesis,
//      which means the maximum number of unbalanced '(' that COULD be paired.

// cmin counts the minimum open parenthesis,
//      which means the number of unbalanced '(' that MUST be paired.

class Solution {
public:
    bool checkValidString(string s) {
        
        int cmin = 0, cmax = 0;
        for (int i=0; i<s.size(); i++){
            
            if (s[i] == '(')
                cmax++, cmin++;
            
            if (s[i] == ')')
                cmax--, cmin = max(cmin - 1, 0);
            
            if (s[i] == '*')
                cmax++, cmin = max(cmin - 1, 0);
            
            if (cmax < 0)
                return false;
        }
        
        return cmin == 0;
    }
};