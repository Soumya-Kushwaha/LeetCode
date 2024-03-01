class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int countOnes = 0, countZeros = 0;
        for (int i=0; i<s.size(); i++){
            if (s[i] == '1')
                countOnes++;
            else
                countZeros++;
        }
        
        string ans = "";
        while (--countOnes){
            ans += "1";
        }
        
        while (countZeros--){
            ans += "0";
        }
        
        ans += "1";
        
        return ans;
    }
};