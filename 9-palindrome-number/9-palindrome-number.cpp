class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long long rem, rev = 0;
        
        if (x<0)
            return false;
        
        else{
            while (x != 0){
                rem = x%10;
                rev = 10*rev + rem;
                x /= 10;
            }
        return (rev == num);
        }
    }
};