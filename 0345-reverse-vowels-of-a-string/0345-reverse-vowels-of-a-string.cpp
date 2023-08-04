class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right){
            if (isVowel(s[left]) && isVowel(s[right])){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            else if (isVowel(s[left]))
                right--;
            else
                left++;
        } 
        return s;   
    }
};