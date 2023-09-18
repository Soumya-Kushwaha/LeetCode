class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<pair<int, int>> st;
        
        vector<int> left(n, -1);
        vector<int> right(n, n);
        vector<int> width(n, -1);
        vector<int> area(n, -1);
        int ans = INT_MIN;
        
        for (int i=0; i<n; i++){
            while(!st.empty() && st.top().first >= heights[i])
                st.pop();
            
            if (st.empty())
                st.push({heights[i], i});
            
            else if (!st.empty() && st.top().first < heights[i]){
                left[i] = st.top().second;
                st.push({heights[i], i});
            }
        }
        
        while (!st.empty())
            st.pop();
        
        for (int i=n-1; i>=0; i--){
            while(!st.empty() && st.top().first >= heights[i])
                st.pop();
            
            if (st.empty())
                st.push({heights[i], i});
            
            else if (!st.empty() && st.top().first < heights[i]){
                right[i] = st.top().second;
                st.push({heights[i], i});
            }
        }
        
        for (int i=0; i<n; i++)
            width[i] = (right[i] - left[i] - 1);
        
        for (int i=0; i<n; i++)
            area[i] = (width[i] * heights[i]);
        
        for (int i=0; i<n; i++)
            ans = max(ans, area[i]);
        
        return ans;
    }
};