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

class cmp{
public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp = new ListNode();
        ListNode* curr = temp;
        
        // use minHeap
        priority_queue<ListNode*, vector<ListNode*>, cmp> q;    // node because we need to insert next of min value node in heap again & again
        
        for (int i=0; i<lists.size(); i++){
            if (lists[i] != NULL)
                q.push(lists[i]);
        }
        
        while (q.size()){
            ListNode *node = q.top();
            temp->next = node;
            temp = node;
            q.pop();
            if (node -> next != NULL)
                q.push(node->next);
        }
        return curr -> next;
    }
};