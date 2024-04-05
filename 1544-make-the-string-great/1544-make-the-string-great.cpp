class Solution {
public:
    string makeGood(string s) {
        
        int size = s.size();

        for(int i = 0; i < size; i++)
        {
            if(s[i] + 32 == s[i+1] or s[i+1] + 32 == s[i])
            {
                s.erase(i,2);
                i = -1;
                size -= 2;
            }
        }
        return s;
    }
};