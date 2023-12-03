class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int count[26] = {};
        for (auto ch : s)
            count[ch - 'a']++;
        
        //int counter[26] = {};
        int ans = 0, temp = 0;
        while (true){
            for (auto charr : target){
                temp++;
                if (count[charr - 'a'] == 0)
                    return ans;
                
                count[charr - 'a']--;
            }
            if (temp == target.size()){
                ans++;
                temp = 0;
            }
        }
        
            
        
        // int ans = 0;
        // for (int i=0; i<26; i++){
        //     if ((count[i]/counter[i]) < ans)
        //         ans = count[i]/counter[i];
        // }
        
        return ans;
    }
};