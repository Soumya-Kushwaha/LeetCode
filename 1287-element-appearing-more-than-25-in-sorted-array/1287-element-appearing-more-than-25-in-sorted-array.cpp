class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int ans = 0, count = 0, temp = arr[0];
        for (int i=0; i<n; i++){
            if (arr[i] == temp){
                count++;
                if (count > (n/4))
                    return temp;
            }
            else{
                temp = arr[i];
                count = 1;
            }
        }
        return -1;
    }
};