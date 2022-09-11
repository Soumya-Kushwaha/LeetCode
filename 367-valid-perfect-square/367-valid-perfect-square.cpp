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

/*
class Solution {
    public boolean isPerfectSquare(int num) {
        long left = 1, right = num;
        while (left <= right) {
            long mid = (left + right) / 2;
            if (mid * mid == num) return true; // check if mid is perfect square
            if (mid * mid < num) { // mid is small -> go right to increase mid
                left = mid + 1;
            } else {
                right = mid - 1; // mid is large -> to left to decrease mid
            }
        }
        return false;
    }
}

*/