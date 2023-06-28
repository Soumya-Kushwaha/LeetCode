class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = 9, cols = 9, grids = 9;

        for (int row = 0; row < rows; row++){
            unordered_set<int> st;
            for (int col = 0; col < cols; col++){
                if (board[row][col] != '.') {
                    if (st.find(board[row][col]) != st.end())
                        return false;
                    st.insert(board[row][col]);
                }
            }
        }
        for (int col = 0; col < cols; col++){
            unordered_set<int> st;
            for (int row = 0; row < rows; row++){
                if (board[row][col] != '.') {
                    if (st.find(board[row][col]) != st.end())
                        return false;
                    st.insert(board[row][col]);
                }
            }
        }
        for (int i = 0; i < 7; i += 3){
            for (int j = 0; j < 7; j += 3){
                unordered_set<int> st;
                for (int row = i; row < i + 3; row++){
                    for (int col = j; col < j + 3; col++){
                        if (board[row][col] != '.') {
                            if (st.find(board[row][col]) != st.end())
                                return false;
                            st.insert(board[row][col]);
                        }
                    }
                }
            }
        }
        return true;
    }
};