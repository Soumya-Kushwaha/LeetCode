class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        long long reverse = 0;
        int temp = x;
        
        while (temp){
            reverse = reverse*10 + temp%10;
            temp /= 10;
        }
        return (reverse == x);
    }
};