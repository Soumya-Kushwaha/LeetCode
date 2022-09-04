class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string ans;
        
        int size1 = word1.length();
        int size2 = word2.length();
        int size = max(size1, size2);
        
        for (int i=0; i < size; i++){
            if (size1)
                ans += word1[i], size1--;
            
            if (size2)
                ans += word2[i], size2--;
        }
        return ans;
        
    }
};