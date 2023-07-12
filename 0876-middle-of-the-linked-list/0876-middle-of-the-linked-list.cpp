/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast = head->next;
        ListNode *slow = head;
        
        if (fast == NULL)
            return slow;
        
        while (fast->next != NULL && fast->next->next != NULL ){
            slow = slow->next;
            fast = fast ->next->next;
        }
        
        return slow->next;
        
    }
};
*/

class Solution{
public:
    ListNode* middleNode(ListNode* head){
        int len = 0;
        ListNode * temp = head;
        while (temp != NULL){
            len++;
            temp = temp -> next;
        }
        int half = len/2;
        temp = head;
        while (half--){
            temp = temp -> next;
        }
        return temp;
    }
};