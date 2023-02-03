class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        string answer;
        int n = s.size();
        int x = 2 * (numRows - 1);

        for(int row=0; row < numRows; row++){
            int index = row;

            while(index < n){
                answer += s[index];

                if(row != 0 && row != numRows - 1){
                    int y = x - 2 * row;
                    int z = index + y;

                    if (z < n)
                        answer += s[z];
                }

                index += x;
            }
        }

        return answer;
    }
};