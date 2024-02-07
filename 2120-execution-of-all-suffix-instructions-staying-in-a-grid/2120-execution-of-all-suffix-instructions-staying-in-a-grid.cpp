class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int row = startPos[0];
        int col = startPos[1];
        
        vector<int> ans;
        
        for (int i=0; i<s.size(); i++){
            int count = 0;
            
            for (int j=i; j<s.size(); j++){
                if (s[j] == 'R' && col+1 < n){
                    col++;
                    count++;
                }
                else if (s[j] == 'D' && row+1 < n){
                    row++;
                    count++;
                }
                else if (s[j] == 'L' && col-1 >=0){
                    col--;
                    count++;
                }
                else if (s[j] == 'U' && row-1 >= 0){ 
                    row--;
                    count++;
                }
                else
                    break;
            }
            
            ans.push_back(count);
            row = startPos[0];
            col = startPos[1];
        }
        
        return ans;
    }
};