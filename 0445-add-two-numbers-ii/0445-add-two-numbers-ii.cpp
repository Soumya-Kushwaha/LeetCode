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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1, st2;
        //ListNode *dummy = new ListNode();
        //ListNode *temp = dummy;
        
        while (l1 != NULL){
            st1.push(l1->val);
            l1 = l1->next;
        }
        while (l2 != NULL){
            st2.push(l2->val);
            l2 = l2->next;
        }
        
        int carry = 0, num = 0;
        ListNode *head = NULL;
        while (st1.size() || st2.size() || carry){
            int sum = 0;
            if (st1.size()){
                num = st1.top();
                sum += num;
                st1.pop();
            }
            
            if (st2.size()){
                num = st2.top();
                sum += num;
                st2.pop();
            }
            
            sum += carry;
            carry = sum / 10;
            ListNode *newNode = new ListNode(sum % 10);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};