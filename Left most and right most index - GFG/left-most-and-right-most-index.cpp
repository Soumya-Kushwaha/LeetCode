//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int startIndex(vector<long long> arr, int n, long long x) {
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

    int endIndex(vector<long long> arr, int n, long long x) {
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
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int n = v.size();
        int first = startIndex(v, n, x);
        int last = endIndex(v, n, x);
        return {first, last};
    }
};



//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends