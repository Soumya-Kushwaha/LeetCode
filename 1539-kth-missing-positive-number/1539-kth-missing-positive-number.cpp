class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        ///if (k < A.size())
        //    return k + A.size();
        
        for (int i = 0; i < A.size(); i++)
            if (A[i] <= k)
                k++;
            else break;

        return k;
    }
};