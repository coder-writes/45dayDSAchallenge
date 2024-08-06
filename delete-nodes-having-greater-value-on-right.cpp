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
    Node* reverseLL(Node* head){
        if(head->next==NULL) return head;
        Node* temp = head;
        Node* prev = NULL;
        while(temp!=NULL){
            Node* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp  = front;
        }
        return prev;
        
    }
    Node *compute(Node *head)
    {
        // your code goes here
        
        // reverseLL(head);
        head = reverseLL(head);
        Node* temp = head;
        int maxVal = temp->data;
        Node* prev = NULL;
        while(temp!=NULL){
                Node* front = temp->next;
            if(temp->data<maxVal){
                prev->next = prev->next->next;
                temp = front;
            }
            else{
                maxVal = temp->data;
                prev = temp;
                temp = front;
                
            }
            // prev = temp;
        }
        head = reverseLL(head);
        return head;
        
        
        
        
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