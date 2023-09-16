//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        stack<int> s;
        vector<int> v (N, -1);
        
        for (int i=2*N-1; i>=0; i--){
            while (!s.empty() && arr[i%N] >= s.top())
                s.pop();
                
            if (s.empty())
                s.push(arr[i%N]);
            
            else if (!s.empty() && arr[i%N] < s.top()){
                v[i%N] = s.top();
                s.push(arr[i%N]);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends