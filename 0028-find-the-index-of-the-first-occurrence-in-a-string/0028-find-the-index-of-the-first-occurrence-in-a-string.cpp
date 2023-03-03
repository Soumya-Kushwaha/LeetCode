class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle)
            return 0;

        int m = haystack.size(); 
        int n = needle.size(); 
        
        if(n > m)
            return -1;
        
        int firstIdx = -1; 
        int i;
        for(i = 0 ; i < haystack.size()-n ; i++)
        {
        // cout<<haystack.substr(i, n)<<" " ;
            if(haystack.substr(i, n) == needle)
            {
                firstIdx = i;
                break;
            }
        }
        
        if(haystack.substr(i, n) == needle)
                firstIdx = i ;      //for last index
        return firstIdx  ;
        
    }
};