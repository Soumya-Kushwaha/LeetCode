class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        
        stack<int> st;
        //st.push(tokens[0]);
        int ans;
        
        for (int i=0; i<n; i++){
            
            string ch = tokens[i];    
            if ((!st.empty()) && (ch == "+" || ch == "-" || ch == "*" || ch == "/")){
                
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
            
                if (ch == "+")
                    ans = num1 + num2;
                    
                else if (ch == "-")
                    ans = num1 - num2;
                    
                else if (ch == "*")
                    ans = num1 * num2;
                
                else if (ch == "/")
                    ans = num1 / num2;
                
                st.push(ans);
            }
            
            else st.push(stoi(ch));
        }
        
        ans = st.top();
        return ans;

    }
};