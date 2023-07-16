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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = new ListNode();
        temp -> next = head;
        ListNode * fast = temp;
        ListNode * slow = temp;
        int count = 0;
        while (count < n){
            fast = fast -> next;
            count++;
        }
        while(fast -> next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow -> next = slow->next->next;
        return temp->next;
    }
};

/*  TC - O(2N)

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL)
            return NULL;
        
        ListNode *temp = head;
        int count = 1;
        
        // length of linked list
        while(temp->next != NULL){
            count++;
            temp = temp->next;
        }
        
        // position to remove node
        int position = count - n + 1;

        // remove first node
        if (position == 1){
            ListNode *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head;
        }
        // remove node
        else{
            ListNode *curr = head;
            ListNode *prev = NULL;
            int count = 1;
            while(count < position){
                prev = curr;
                curr = curr->next;
                count++;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        return head;
    }
};
*/