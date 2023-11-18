class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> counts(5, 1);
        
        for (int i=2; i<=n; i++)
            for (int j=3; j>=0; j--)
                counts[j] += counts[j+1];
        
        int ans = 0;
        
        for (auto c : counts)
            ans += c;
        
        return ans;
    }
};