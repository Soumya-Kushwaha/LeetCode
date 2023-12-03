class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int count[26] = {};
        int res = 0;
        for (auto ch: chars){
            count[ch -'a']++;
        }
        
        for (auto word : words){
            int temp [26] = {};
            bool match = true;
            for (auto ch : word){
                if ( ++temp[ch - 'a'] > count[ch - 'a']){
                    match = false;
                    break;
                }
            }
            
            if (match)
                res += word.size();
        }
        
        return res;
    }
};