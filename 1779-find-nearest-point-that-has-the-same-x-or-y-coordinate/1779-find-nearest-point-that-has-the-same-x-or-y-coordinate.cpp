class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int man_dist, index, min_dist = INT_MAX, count = 0;
        for (int i=0; i < points.size(); i++){
            if ((points[i][0] == x) || (points[i][1] == y)){
                man_dist = abs(x - points[i][0]) + abs(y - points[i][1]);
                count++;
                
                if (min_dist > man_dist){
                    min_dist = man_dist;
                    index = i;
                }
            }
        }
        if (count == 0)
            return -1;
        else return index;
    }
};