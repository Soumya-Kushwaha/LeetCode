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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        
        ListNode *temp = NULL;
        ListNode *ans = temp;
        if(list1->val < list2->val){
            temp = list1;
            ans = list1;
            list1 = list1->next;
        }
        else{
            temp = list2;
            ans = list2;
            list2 = list2->next;
        }
        while (list1 != NULL && list2 != NULL){
            if (list1->val < list2->val){
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        if (list1 == NULL)
            temp->next = list2;
        else
            temp->next = list1;
            
        return ans;
    }
};


/* Recursion + New List

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        
        if (list2 == NULL)
            return list1;
        
        ListNode *result = NULL;
        if (list1->val <= list2 ->val){
            result = list1;
            result -> next = mergeTwoLists(list1->next, list2);
        }
        
        else{
            result = list2;
            result -> next = mergeTwoLists(list1, list2->next);
        }
        
        return result;
    }
};
*/