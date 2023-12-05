class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> ans(n);
        int maxi = arr[n-1];
        ans[n-1] = -1;

        for (int i=n-2; i>=0; i--){
            ans[i] = maxi;
            maxi = max(maxi, arr[i]);
        }

        return ans;
    }
};
     

// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         stack<int> st;
//         int n = arr.size();

//         st.push(arr[n-1]);
//         arr[n-1] = -1;

//         for (int i=n-2; i>=0; i--){
//                if (arr[i] > st.top()){
//                    int temp = st.top();
//                    st.push(arr[i]); 
//                    arr[i] = temp;

//                }
//                else{
//                    int temp = st.top();
//                    arr[i] = temp;
//                }
//         }
//         return arr;
//     }
// };