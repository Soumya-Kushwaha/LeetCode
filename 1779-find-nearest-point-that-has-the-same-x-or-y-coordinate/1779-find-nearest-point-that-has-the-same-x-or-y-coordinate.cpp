class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int manhattan, min = INT_MAX, ans = -1;
        for (int i=0; i < points.size(); i++)
            if ((points[i][0] == x) || (points[i][1] == y)){
                manhattan = abs(x - points[i][0]) + abs(y - points[i][1]);
                
                if (min > manhattan)
                    min = manhattan, ans = i;
            }
        return ans;
    }
};