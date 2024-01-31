class Solution{
    public:
    vector<int> dailyTemperatures(vector<int>& temp){
        
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> st;
        
        for (int i=n-1; i>=0; i--){
            while (!st.empty() && temp[i] >= temp[st.top()]){
                st.pop();                
            }
            
            if (!st.empty()){
                ans[i] = st.top() - i;
            }
            
            st.push(i);
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {
//         int n = temperatures.size();
//         vector<int> ans(n);
        
//         for (int i=0; i<n; i++){
//             int count = 1;
            
//             for (int j = i+1; j<n; j++){
                
//                 if (temperatures[j] > temperatures[i]){
//                     ans[i] = count;
//                     break;
//                 }
//                 else count++;
//             }
//         }
        
//         return ans;
//     }
// };