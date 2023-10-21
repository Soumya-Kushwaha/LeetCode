//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Initialize the sum to 0
        long long summ = 0;
        
        // Iterate from 1 to N
        for (int i=1; i<=N; i++){
            
            // Add the contribution of each divisor to the sum
            summ += (N/i)*i;
        }
        
        return summ;
    }
};

// 1 occurs how many times? N -> So N/i 
// what is it product finally? (N/i) * i 

// Repeat for all numbers & shoot!

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends