//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.

        int helper(int arr[], int n, int pages){
            int students = 1, currPages = 0;
            for (int i=0; i<n; i++){
                if (currPages + arr[i] > pages){
                    students++;
                    currPages = arr[i];
                }
                else currPages += arr[i];
            }
            return students;
        }
        
        int findPages(int arr[], int n, int m) {
            if (n < m)
                return -1;
        
            int low = INT_MIN, high = 0;
            for (int i=0; i<n; i++){
                low = max(low, arr[i]);
                high += arr[i];
            }
        
            while (low <= high){
                int mid = low + (high - low)/2;
                int students = helper(arr, n,  mid);
                if (students > m)
                    low = mid + 1;
                else high = mid - 1;
            }
            return low;
            // Write your code here.
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends