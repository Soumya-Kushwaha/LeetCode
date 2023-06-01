
class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 0;
        long right = num;
        
        while (left <= right){
            long mid = left + (right - left)/2;
            
            if (mid * mid == num)
                return true;
            else if (mid * mid < num)
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return false;
    }
};

/*
class Solution {
public:
    bool isPerfectSquare(int num) {
        long low = 0;
        long high = num;
        
        while (low <= high){
            long mid = low + (high - low)/2;
            
            if (mid*mid == num)
                return true;

            else if (mid*mid > num)
                high = mid - 1;

            else low = mid + 1;
        }
        return false;
    }
};
*/