class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> a = {nums[0], nums[1], nums[2]};
        vector<vector<int>> b;
        
        // for (int i=0; i<a.size(); i++)
        //     cout << a[i];
        
        for (int i=3; i<nums.size(); i++){
            if (i % 3 == 0){
                b.push_back(a);
                a.clear();
            }
            a.push_back(nums[i]);
        }
        b.push_back(a);
        
        cout << b.size();
            
        vector<vector<int>> ans;
        for (int i=0; i<b.size(); i++){
            //for (int j=0; j<3; j++){
            if ((abs(b[i][0] - b[i][1]) > k) ||  (abs(b[i][1] - b[i][2]) > k) || (abs(b[i][0] - b[i][2]) > k))
                {
                return {};
            }
            //else ans.push_back(b[i);
        }
        
        return b;
    }
};