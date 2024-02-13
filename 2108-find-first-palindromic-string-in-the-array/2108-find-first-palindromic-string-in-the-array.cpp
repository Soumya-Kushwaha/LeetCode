class Solution {
public:
    
    bool isPalindrome(string str){
        int n = str.size();
        
        for (int i=0; i<=n/2; i++){
            if (str[i] != str[n-i-1])
                return false;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for (int i=0; i<words.size(); i++){
            if (isPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};