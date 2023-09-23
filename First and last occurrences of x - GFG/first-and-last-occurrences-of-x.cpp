//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int startIndex(int arr[], int n, int x) {
        int first = -1;
        int low = 0;
        int high = n - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if (arr[mid] == x){
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else high = mid - 1;
        }
        return first;
    }

    int endIndex(int arr[], int n, int x) {
        int last = -1;
        int low = 0;
        int high = n - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if (arr[mid] == x){
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < x)
                low = mid + 1;
            else high = mid - 1;
        }
        return last;            
    }

    vector<int> find(int arr[], int n , int x )
    {
        vector<int> ans(2, -1);
        int first = startIndex(arr, n, x);

        if (first != -1){
            int last = endIndex(arr, n, x);
            ans[0] = first;
            ans[1] = last;
        }
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends