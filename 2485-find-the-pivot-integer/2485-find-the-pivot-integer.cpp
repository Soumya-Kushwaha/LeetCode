class Solution{
public:
    int pivotInteger(int n){
        int left = 1, right = n;
        int summ = (n * (n + 1)) / 2;
        
        while (left <= right){
            int mid = left + (right - left) / 2;
            
            int firstHalfSum = (mid * (mid + 1)) / 2;
            int secondHalfSum = summ - firstHalfSum + mid;
            
            if (firstHalfSum == secondHalfSum)
                return mid;
            
            else if (firstHalfSum > secondHalfSum)
                right = mid - 1;
            
            else
                left = mid + 1;
        }
        
        return -1;
    }
};