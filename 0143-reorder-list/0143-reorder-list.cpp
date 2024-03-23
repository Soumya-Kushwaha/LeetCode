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
    void reorderList(ListNode* head) {
        
        stack<ListNode*> st;
        ListNode *temp = head;
        
        while(temp){
            st.push(temp);
            temp = temp->next; 
        }
        
        // point to the start
        temp = head;
        int n = st.size();
        
        if(n<3) return;
        
        ListNode* curr;
        
        for(int i=0;i<n/2;++i)
        {
            curr = temp->next;
            temp->next = st.top();
            st.pop();
            
            temp= temp->next;
            temp->next = curr;
            temp = temp->next;
        }
        
        temp->next = NULL;
    }
    
};