class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        int ans = -1;
        for (int i=0; i<n-2; i++){
            if ((num[i] == num[i+1]) && (num[i] == num[i+2])){
                //int temp = (num[i]-'0');
                ans = max(num[i]-'0', ans);
            }
        }
        if (ans == -1)
            return "";
        return std::string(3, '0' + ans);
        
//        string res = to_string(ans) + to_string(ans) + to_string(ans);
//        return res;
    }
};