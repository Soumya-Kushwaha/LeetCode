class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0, sum;
        string ans;

        while (i >= 0 || j >= 0){
            sum = carry;
            if (i >= 0)
                sum += (a[i] - '0');
            
            if (j >= 0)
                sum += (b[j] - '0');
             
            ans += to_string(sum % 2);
            carry = sum / 2;
            i--;
            j--;
        }
        if (carry != 0)
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};