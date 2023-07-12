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

// RECURSIVE SOLUTION

class Solution {
public:
    ListNode* reverse(ListNode* head){
        if (head -> next == NULL)
            return head;
        
        ListNode *reverseHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return reverseHead;
    }
    
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
            return NULL;
        return reverse(head);
    }
};

/*
// ITERATIVE SOLUTION:

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* curr = head, *prev = NULL, *next = head->next;
        while (curr != NULL){
            next = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
*/