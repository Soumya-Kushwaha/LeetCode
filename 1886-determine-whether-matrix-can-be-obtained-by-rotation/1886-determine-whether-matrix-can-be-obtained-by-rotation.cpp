class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int n = matrix.size();
        int Rotation = 0;

        while (Rotation < 4){
            for (int row=0; row<n; row++){
                for (int col = row+1; col<n; col++){
                    swap(matrix[row][col], matrix[col][row]);
                }
            }
            for (int row=0; row<n; row++)
                reverse(matrix[row].begin(), matrix[row].end());

            if (matrix == target)
              return true;
              
            Rotation++;
        } 
        return false;
    }
};