class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word_1 = "", word_2 = "";
        for (auto word : word1)
            word_1 += word;
        for (auto word : word2)
            word_2 += word;
        
        if (word_1.size() != word_2.size())
            return false;
        
        // cout << word_1 << word_2;
        
        for (int i=0; i<word_1.size(); i++)
            if (word_1[i] != word_2[i])
                return false;
        return true;
    }
};