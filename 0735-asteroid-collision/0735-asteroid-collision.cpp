class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        
        for (int i=0; i<n; i++){
            if (st.empty() || asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            
            else {
                while(!st.empty() and st.top() > 0 and st.top() < abs(asteroids[i])) {
                    st.pop();
                }
                if(!st.empty() and st.top() == abs(asteroids[i])) {
                    st.pop();
                }
                else {
                    if(st.empty() || st.top() < 0) {
                        st.push(asteroids[i]);
                    }
                }
            }
        }
        
        vector<int> ans(st.size());
        for (int i=st.size()-1; i>=0; i--){
            ans[i]= st.top();
            st.pop();
        }
        return ans;
    }
};