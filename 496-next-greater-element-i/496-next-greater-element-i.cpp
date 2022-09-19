class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++){
            for (int j = 0; j < nums2.size(); j++){
                int val = 0;
                if (nums2[j] == nums1[i]){
                    for (int k = j; k < nums2.size(); k++)
                        if (nums2[k] > nums2[j]){
                            val = nums2[k];
                            break;
                        }
                    if (val == 0)
                        ans.emplace_back(-1);
                    else ans.emplace_back(val);
                }         
            }
        }
        return ans;
    }
};