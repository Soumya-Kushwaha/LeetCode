class Solution {
public:
    bool judgeSquareSum(int c) {
        long low = 0; 
        long high = sqrt(c);
        
        while (low <= high){
            long value = low*low + high*high;
           
            if ( value == c)
                return true;
            
            else if (value > c)
                high--;
            
            else low++;
        }
        
        return false;
    }
};