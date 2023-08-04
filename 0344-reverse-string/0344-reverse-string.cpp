class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int left = 0, right = size-1;
        
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};