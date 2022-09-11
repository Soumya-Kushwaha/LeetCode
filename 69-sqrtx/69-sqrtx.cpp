class Solution {
public:
    int mySqrt(int x) {
		long low = 0;
		long high = x;
		while(low < high-1)
		{
			long mid = low + (high-low)/2;
			
            if (mid*mid < x) 
                low = mid;
			else if (mid*mid == x) 
                return mid;
			else high = mid;
		}

		return high*high == x? high: low;
        
    }
};