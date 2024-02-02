class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        string ref = "123456789";
        vector<int> ans;
        
        for (int i=0; i<ref.size(); i++){
            string num = "";
            for (int j=i; j<ref.size(); j++){
                num += ref[j];
                int number = stoi(num);
                if (number >= low && number <= high)
                    ans.push_back(number);
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};