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
    
    ListNode* reverseList(ListNode* head){
        ListNode * prev = NULL;
        ListNode * next = NULL;
        while (head != NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        
        ListNode* fast = head, *slow = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow -> next = reverseList(slow->next);
        
        ListNode *start = head, *mid = slow->next;
        while (mid != NULL){
            if (start->val != mid->val)
                return false;
            start = start->next;
            mid = mid->next;
        }
        return true;
    }
};