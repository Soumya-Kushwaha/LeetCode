class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int mag = magazine.size();
        int ran = ransomNote.size();
        unordered_map<char, int> mp;

        for (int i=0; i<mag; i++)
            mp[magazine[i]]++;

        for (int i=0; i<ran; i++){
            if (mp.find(ransomNote[i]) == mp.end() || mp[ransomNote[i]] == 0)
                return false;
            else mp[ransomNote[i]]--;
        }
        return true;
    }
};