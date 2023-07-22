/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head -> next == NULL)
            return NULL;
        
        ListNode *fast = head, *slow = head;
        while (fast -> next != NULL && fast -> next -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
            
            if (fast == slow){
                ListNode *entry = head;
                while(entry != slow){
                    entry = entry -> next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};