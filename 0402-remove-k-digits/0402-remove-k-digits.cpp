class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string ans="";
        
        for(int i=0; i<num.size(); i++)
        {
            while (ans.size() > 0 && 
                  ans[ans.size() - 1] > num[i] &&
                  k > 0)
            {
                ans.pop_back();
                k--;
            }
            
            if (ans.size() || num[i] !='0')
                ans.push_back(num[i]);
        }
        
        while(ans.size() && k--)
            ans.pop_back();
        
        return (ans == "") ? "0" : ans;
    }
};