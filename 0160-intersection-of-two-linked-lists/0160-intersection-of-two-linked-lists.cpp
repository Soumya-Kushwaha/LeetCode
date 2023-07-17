/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
 class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    }
};
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL)
            return NULL;
        
        while(headA != NULL){
            ListNode *temp = headB;
            while (temp != NULL){
                if (headA == temp)
                    return headA;
                else temp = temp->next;
            }
            headA = headA -> next;
        }
        return NULL;
    }
};