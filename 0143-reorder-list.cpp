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
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        //if we want to stop our slow pointer one node before the mid Node then  use (fast->next!=NULL && fast->next->next!=NULL)
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;

    }
    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp!=NULL){
            ListNode* front = temp->next;
            temp->next=prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        return ;
        ListNode* midNode = middleNode(head);
        ListNode* secondHalf = midNode->next;
        midNode->next = nullptr;
        ListNode* secondHalfHead = reverseLL(secondHalf);
        ListNode* firstHalf = head; 
        while(secondHalfHead){
            ListNode* front1 = secondHalfHead->next;
            // if(temp2->next) ListNode* front2 = temp2->next;
            secondHalfHead->next = firstHalf->next;
            firstHalf->next = secondHalfHead;
            firstHalf = secondHalfHead->next;
            secondHalfHead = front1;
        }
        
    }
};