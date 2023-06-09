class Solution {
public:
    bool checkString(string s) {
        
        int a=0, b=0;
        for (int i=0; i<s.size(); i++){
            if (s[i] == 'b'){
                int temp = i+1;
                b = i;
                for (int i=temp; i<s.size(); i++)
                    if (s[i] == 'a')
                        return false;
            }
        }
        return true;
    }
};