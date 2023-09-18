//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<pair<int, int>> st;
        
        vector<int> left(n, -1);
        vector<int> right(n, n);
        vector<int> width(n, -1);
        vector<long long> area(n, -1);
        long long ans = INT_MIN;
        
        for (int i=0; i<n; i++){
            while(!st.empty() && st.top().first >= arr[i])
                st.pop();
            
            if (st.empty())
                st.push({arr[i], i});
            
            else if (!st.empty() && st.top().first < arr[i]){
                left[i] = st.top().second;
                st.push({arr[i], i});
            }
        }
        
        while (!st.empty())
            st.pop();
        
        for (int i=n-1; i>=0; i--){
            while(!st.empty() && st.top().first >= arr[i])
                st.pop();
            
            if (st.empty())
                st.push({arr[i], i});
            
            else if (!st.empty() && st.top().first < arr[i]){
                right[i] = st.top().second;
                st.push({arr[i], i});
            }
        }
        
        for (int i=0; i<n; i++)
            width[i] = (right[i] - left[i] - 1);
        
        for (int i=0; i<n; i++)
            area[i] = (width[i] * arr[i]);
        
        for (int i=0; i<n; i++)
            ans = max(ans, area[i]);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends