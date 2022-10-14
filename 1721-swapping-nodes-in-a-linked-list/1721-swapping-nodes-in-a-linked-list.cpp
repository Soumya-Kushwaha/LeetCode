/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        vector<int> arr;
        ListNode* curr = head;
        
        while (curr != NULL){
            arr.emplace_back(curr->val);
            curr = curr -> next;
        }
        
       /* if (k == 1){
            reverse(arr.begin(), arr.end());
            
            curr = head;
            curr -> val = arr[0];
            curr = curr -> next;
            curr -> val = arr[1];
        }
        
        else{
         */   swap(arr[k-1], arr[arr.size()-k]);
        
            curr = head;
            for (int i=0; i<arr.size(); i++){
                curr -> val = arr[i];
                curr = curr -> next;
            }
        //}
        
        //curr -> next = NULL;
        
        return head;
    }
};