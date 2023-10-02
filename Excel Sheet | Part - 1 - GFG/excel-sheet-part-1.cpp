//{ Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ExcelColumn(int N)
    {
        string ans = "";
        char arr[27];
        for (int i=0; i<26; i++)
            arr[i] = 'A' + i;
            
        if (N <= 26){
            ans = arr[N-1];
            return ans;
        }
        
        int rem;
        while (N > 0){
            rem = (N-1) % 26;
            N = (N-1) / 26;
            ans += arr[rem];
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
    
// } Driver Code Ends