class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        
        s = s+s;
        int i, j;
        for (i=0; i<s.size(); i++){
            for (j = 0; j<goal.size();){
                if (s[i+j] != goal[j])
                    break;
                else j++;
            }
            if (j == goal.size())
                return true;
        }
        return false;
    }
};