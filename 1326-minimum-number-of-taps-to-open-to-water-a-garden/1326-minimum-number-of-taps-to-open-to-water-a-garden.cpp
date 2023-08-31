class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int min = 0;
        int max = 0;
        int taps = 0;
        
        while (max < n){
            for (int i=0; i<ranges.size(); i++){
                if (i-ranges[i] <= min && i+ranges[i]>max)
                    max = i+ranges[i];
            }
            if (min == max)
                return -1;
            
            taps++;
            min = max;
        }
        return taps;
    }
};