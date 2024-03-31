class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(), tokens.end());               // sort the token 
        
        int s = 0;                                       // Initialize the Score
        int maxi = 0;                                   // Track the maximum score
        int l = 0, r = tokens.size() - 1;              // Left and Right pointer 
        
        while (l <= r) 
        { 
            // If the remaining power is greater than or equal to the smallest token
            if (power >= tokens[l]) 
            {  
                power -= tokens[l];                 // Reduce the Power 
                s++;                               // Increase the score
                l++;                              // Move the left pointer to the right.
                
                // Update the maximum score if the current score is higher.score
                maxi = max(maxi, s);             
            } 
            
            // If the current score is positive, consider trading tokens for power.
            else if (s > 0) 
            {                  
                power += tokens[r];           // increase the power
                s--;                         // Decrease the score.
                r--;                        // Move the right pointer to the left.
            }
            
            else               
                break;               
        }
        return maxi;
    }
};