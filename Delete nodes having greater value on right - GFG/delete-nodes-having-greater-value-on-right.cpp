//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node* head){
        if (head -> next == NULL)
            return head;
        
        Node *reverseHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return reverseHead;
    }
    
    Node* reverseList(Node* head) {
        if (head == NULL)
            return NULL;
        return reverse(head);
    }
    
    Node* compute(Node* head) {
        Node* curr = reverse(head);
        Node* temp = curr;
        int x = temp -> data;
        while (temp -> next != NULL){
            if (x > temp->next->data){
                temp -> next = temp -> next -> next;
            }
            else{
                x = temp -> next -> data;
                temp = temp -> next;
            }
        }
        temp = reverse(curr);
        return temp;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends