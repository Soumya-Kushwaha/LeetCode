class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int curr_sum = 0, count = 0;
        for(int i=0; i<k; i++)
            curr_sum += arr[i];
        int curr_avg = curr_sum/k;
        
        if (curr_avg >= threshold)
            count++;
        
        for(int i=k; i<arr.size(); i++){
            curr_sum += (arr[i] - arr[i - k]);
            curr_avg = curr_sum/k;
            if (curr_avg >= threshold)
            count++;
        }
        return count;
    }
};