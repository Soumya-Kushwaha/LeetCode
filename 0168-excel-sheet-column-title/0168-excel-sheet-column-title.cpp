class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";
        char arr[27];
        for (int i=0; i<26; i++)
            arr[i] = 'A' + i;
        
        if (columnNumber <= 26){
            ans = arr[columnNumber-1];
            return ans;
        }
        
        int rem;
        while (columnNumber > 0){
            int rem = (columnNumber-1) % 26;
            columnNumber = (columnNumber-1) / 26;
            ans += arr[rem];
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};