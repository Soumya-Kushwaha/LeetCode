class Solution {
public:
    int maxDepth(string s) {
        
        stack<char> st;
        int ans = 0;
        
        for (int i=0; i<s.size(); i++)
        {
            // push open parentheses to the stack
            if (s[i] == '(')
                st.push(s[i]);
            
            // find the maximum number of open parentheses when a close parentheses is encountered
            // and pop
            else if (s[i] == ')')
            {
                int n = st.size();
                ans = max(n, ans);
                
                st.pop();
            }
        }
        
        return ans;
    }
};