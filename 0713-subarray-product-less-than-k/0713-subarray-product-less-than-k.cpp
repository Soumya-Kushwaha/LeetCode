class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n=v.size();
        if(k==0 || k==1) {
            return 0;
        }
        int i=0,j=0;
        int s=1;
        int ans=0;
        while(j<n) {
            s=s*v[j];
            while(i<n && s>=k) {
                s=s/v[i];
                i++;
            }
            ans=ans+j-i+1;
            j++;
        }
        return ans;
    }
};