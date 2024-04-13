class Solution {
public:
    int maximalRectangle(vector<vector<char> > &matrix) {
        
        if (matrix.size() <= 0 || matrix[0].size() <= 0)
            return 0;

        int m = matrix.size();
        int n = matrix[0].size() + 1;
        int h = 0, w = 0, ret = 0;
        
        vector<int> height(n, 0);

        for (int i = 0; i < m; ++i) {
            stack<int> s;
            for (int j = 0; j < n; ++j) {
                
                // set value
                if (j < n - 1) {
                    if (matrix[i][j] == '1') height[j] += 1;
                    else height[j] = 0;
                }

                // compute area
                while (!s.empty() && height[s.top()] >= height[j]) {
                    h = height[s.top()];
                    s.pop();
                    w = s.empty() ? j : j - s.top() - 1;
                    if (h * w > ret) ret = h * w;
                }

                s.push(j);
            }
        }

        return ret;
    }
};

