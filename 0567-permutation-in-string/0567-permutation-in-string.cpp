class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        
        if (len1 > len2)
            return false;
            
        sort(s1.begin(), s1.end());

        for (int i = 0; i < len2 - len1 + 1; i++){
            string substr = s2.substr(i, len1);
            sort(substr.begin(), substr.end());

            if (s1 == substr)
                return true;
        }
        return false;
    }
};