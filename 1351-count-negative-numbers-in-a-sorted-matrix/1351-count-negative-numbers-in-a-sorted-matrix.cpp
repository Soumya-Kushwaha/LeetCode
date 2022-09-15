class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (const vector<int>& row: grid)
            for (const int& i: row)
                if (i < 0) count++;
        return count;
    }
};