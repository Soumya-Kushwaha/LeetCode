//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    
    // Moore's Voting Algo!
    
    int majorityElement(int a[], int size)
    {
        
        int element = 0, count = 0;
        for (int i=0; i<size; i++){
            if (count == 0)
                element = a[i];
                
            if (a[i] == element)
                count++;
                
            else count--;
        }
        
        int check = 0;
        for (int i=0; i<size; i++)
            if (a[i] == element)
                check++;
                
        return (check > size/2 ? element : -1);
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends