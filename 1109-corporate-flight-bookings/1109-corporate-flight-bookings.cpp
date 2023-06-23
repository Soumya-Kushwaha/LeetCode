class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int b = bookings.size();
        vector<int> ans(n,0);

        for(int i=0; i<b; i++){
            int first = bookings[i][0];
            int last = bookings[i][1];
            int value = bookings[i][2];

            ans[first - 1] += value;
            
            if(last < n)
                ans[last] -= value;
        }

        for (int i=1; i<n; i++)
            ans[i] += ans[i-1];

        return ans;
    }
};