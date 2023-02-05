class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len1 = s.size();
        int len2 = p.size();
        
        if (len1 < len2)
            return {};
            
        vector <int> v1(26, 0);
        vector <int> v2(26, 0);

        for(int i=0; i < len2; i++){
            v1[p[i] - 'a']++;
            v2[s[i] - 'a']++;
        }

        vector <int> ans;
        if (v1 == v2)
            ans.push_back(0);
        
        for(int i = len2; i < len1; i++){
            v2[s[i - len2] - 'a']--;
            v2[s[i] - 'a']++;

            if (v1 == v2)
                ans.push_back(i - len2 + 1);
        }
        return ans;
    }
};

/* SORTING -> TLE : [(O(len1 - len2) * n * logn)]

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len1 = s.size();
        int len2 = p.size();

        vector<int> ans;

        sort(p.begin(), p.end());

        for (int x = 0; x <= len1 - len2; x++){
            string answer = s.substr(x, len2);
            sort(answer.begin(), answer.end());

            if (p == answer)
                ans.push_back(x);
        }
        return ans;
    }
};
*/