class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if they have non-zero GCD string.
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // GCD length
        int gcdLen = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLen);
    }
};