class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0, temp = 0, temp_count = 0;
        for (int i=0; i<arr.size(); i++){
            sum += arr[i];
            temp += arr[i];
            temp_count = 1;

            for (int j=i+1; j<arr.size(); j++){
                temp += arr[j];
                temp_count++;
                if (temp_count % 2 != 0)
                    sum += temp;
            }
            temp = 0;
        }
        return sum;
    }
};