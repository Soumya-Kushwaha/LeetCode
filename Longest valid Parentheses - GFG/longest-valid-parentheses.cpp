//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        stack<char> st;
        stack<int> index;
        
        index.push(-1);
        
        int count = 0;
        int ans = 0;
        
        for (int i=0; i<S.size(); i++){
            if (st.empty() && S[i] == ')')
                index.push(i);
                
            else if (S[i] == '('){
                st.push(S[i]);
                index.push(i);
            }
            
            else if (!st.empty() && st.top() == '(' && S[i] == ')'){
                st.pop();
                index.pop();
                count = i - index.top();
            }
            ans = max(ans, count);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends