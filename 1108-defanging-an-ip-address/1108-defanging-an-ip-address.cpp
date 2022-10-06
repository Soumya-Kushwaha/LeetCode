class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        int size = address.size();
        
        for (int i=0; i<size; i++){
            if (address[i] == '.')
                ans += "[.]";
            else ans += address[i];
        }
        return ans;
    }
};