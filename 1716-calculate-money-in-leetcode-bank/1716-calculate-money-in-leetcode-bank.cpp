class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int weeks = n/7;
        int days = n % 7;
        
        ans += (weeks * (weeks-1))/2 * 7; // difference between consecutive weeks is addition of 7
        ans += weeks * 28;                // complete weeks
        ans += (days * (days+1))/2 + (weeks * days);
        
        return ans;
    }
};