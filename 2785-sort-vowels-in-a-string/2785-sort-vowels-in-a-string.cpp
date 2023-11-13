class Solution {
public:
    string sortVowels(string s) {
        string ans = "";
        vector<char> alpha;
        vector<int> index;
        
        for (int i=0; i<s.size(); i++){
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) =='o' || tolower(s[i]) == 'u'){
                alpha.push_back(s[i]);
                index.push_back(i);
                ans += '*';
            }
            else
                ans += s[i];
        }
        
        sort(alpha.begin(), alpha.end());
        for (int i=0; i<alpha.size(); i++){
            ans[index[i]] = alpha[i];
        }
        
        return ans;
    }
};