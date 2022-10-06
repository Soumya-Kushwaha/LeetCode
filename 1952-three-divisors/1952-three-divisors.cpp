class Solution {
public:
    bool isThree(int n) {
        int count = 2;
        for (int i=n-1; i>1; i--){
            if (n%i == 0)
                count++;
            if (count > 3)
                return false;
        }
        if (count == 3)
            return true;
        else return false;        
    }
};