class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        
        int count = 0;
        
        int low = 0;
        int high = people.size() - 1;
        
        while (low <= high){
            if(people[low] + people[high] <= limit)
                low++;
            
            count++;
            high--;
        }
        return count;
    }
};