class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitudes;
        altitudes.push_back(0);

        int altitude, max_altitude = 0;
        for(int i=0; i<gain.size(); i++){
            altitude = gain[i] + altitudes[i];
            altitudes.push_back(altitude);
            max_altitude = max(max_altitude, altitude);
        }
        return max_altitude;
    }
};