//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    set <char> st;
	    for (int i=0; i<S.size(); i++){
	        st.insert(S[i]);
	    }
	    
	    string ans = "";
	    for (int i=0; i<S.size(); i++){
	        if (st.find(S[i]) != st.end()){
	            ans += S[i];
	            st.erase(S[i]);
	        }
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends