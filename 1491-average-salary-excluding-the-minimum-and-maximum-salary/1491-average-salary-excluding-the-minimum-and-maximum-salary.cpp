class Solution {
public:
    double average(vector<int>& salary) {
       
        double min = INT_MAX;
        double max = INT_MIN;
        int size = salary.size();
        
        double sum = 0;
        for (int i=0; i<size; i++){
            sum += salary[i];
            
            if (salary[i] < min)
                min = salary[i];
            
            if (salary[i] > max)
                max = salary[i];
        }
        
        sum = sum - (min + max);
        return sum/(size-2);
    }
};