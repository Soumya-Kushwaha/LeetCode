class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> ans;
        vector<int> temp;
        
        for (int col = 0; col < cols; col++){
            for (int row = 0; row < rows; row++)
                temp.push_back(matrix[row][col]);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};