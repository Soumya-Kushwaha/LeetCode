//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ans;
        int xorr = 0;
        for (int i=0; i<nums.size(); i++)
            xorr ^= nums[i];
            
        int number = xorr & -xorr;
        int xor1 = 0, xor2 = 0;
        
        for (int i=0; i<nums.size(); i++){
            if (nums[i] & number)
                xor1 ^= nums[i];
            else
                xor2 ^= nums[i];
        }
        
        if (xor1 > xor2){
            ans.push_back(xor2);
            ans.push_back(xor1);
        }
        else{
            ans.push_back(xor1);
            ans.push_back(xor2);
        }
            
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends