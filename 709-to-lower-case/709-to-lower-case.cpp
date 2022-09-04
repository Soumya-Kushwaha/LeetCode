class Solution {
public:
    string toLowerCase(string s) {
        
        string ans;
        for (int i=0; i< s.length(); i++){
            if (s[i] >= 65 && s[i] <= 90)
                ans += (s[i] + 32);
            
            else ans += s[i];
        }
        
        return ans;
    }
};

    // A = 65
    // Z = 90
    // a = 97
        