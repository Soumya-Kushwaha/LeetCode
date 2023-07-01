class Solution {
public:

long long reqTime(vector<int> & piles, int mid){
    long long  time = 0;

    for (int i=0; i<piles.size(); i++)
        time += ceil((double)piles[i]/(double)mid);
    
    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxElement = INT_MIN;
        int n = piles.size();

        for (int i=0; i<n; i++)
            maxElement = max(maxElement, piles[i]);

        int low = 1, high = maxElement;

        while (low <= high){
            int mid = low + (high - low)/2;

            if (reqTime(piles, mid) <= h)
                high = mid - 1;
            else 
                low = mid + 1;
        }
        return low;
    }
};