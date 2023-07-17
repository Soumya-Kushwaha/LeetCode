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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA, *tempB = headB;
        while(tempA != tempB){
            if(tempA == NULL)
                tempA = headB;
            else tempA = tempA ->next;
            
            if(tempB == NULL)
                tempB = headA;
            else tempB = tempB ->next;
        }
        return tempA;
    }
};


/* DIfference in Length:

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tempA = headA, *tempB = headB;
        int lenA = 0, lenB = 0;
        while (tempA != NULL){
            lenA++;
            tempA = tempA -> next;
        }
        while (tempB != NULL){
            lenB++;
            tempB = tempB -> next;
        }
        
        // to sync pointers
        if (lenA > lenB){
            while(lenA != lenB){
                headA = headA -> next;
                lenA--;
            }
        }
        else{
            while(lenA != lenB){
                headB = headB -> next;
                lenB--;
            }
        }
        while (headA != NULL){
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};


// Hashing:

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
               
        unordered_set<ListNode*> st;
        while (headA != NULL){
            st.insert(headA);
            headA = headA->next;
        }
        while (headB != NULL){
            if (st.find(headB) != st.end())
                return headB;
            else headB = headB->next;
        }
        return NULL;
    }
};


// Brute Force Approach:

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
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
*/