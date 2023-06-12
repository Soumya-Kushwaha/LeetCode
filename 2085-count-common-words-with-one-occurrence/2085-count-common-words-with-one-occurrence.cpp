class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int ans = 0;
        unordered_map<string, int> map1, map2;
        for (auto it: words1)
            map1[it]++;
        for (auto it: words2)
            map2[it]++;

        if (map1.size() >= map2.size())
        {
            for (auto it: map1)
                if (it.second == 1 && map2[it.first] == 1)
                    ans++;
        }
        else
        {
            for (auto it: map2)
                if (it.second == 1 && map1[it.first] == 1)
                    ans++;
        }
    
        return ans;
    }
};