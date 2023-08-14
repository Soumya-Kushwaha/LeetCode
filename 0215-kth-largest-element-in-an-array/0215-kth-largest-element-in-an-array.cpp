class Solution{
public:
    int findKthLargest(vector<int>& nums, int k){
        priority_queue<int> heap;
        for (int num : nums){
            heap.push(-num);    //-num bcz we need min heap; by default, max heap
            
            //When we pop, the smallest element is removed. 
            //By limiting the heap's size to k, after handling all elements, 
            //the heap will contain exactly the k largest elements from the array.
            
            if (heap.size() > k)  
                heap.pop();
        }
        return -heap.top();
    }
};

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end(), greater<int>());
//         return nums[k-1];        
//     }
// };