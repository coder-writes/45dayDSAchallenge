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
    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head; 
        }

        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1  = reverseLL(l1);
       ListNode* temp2 = reverseLL(l2);

        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
        // = l1;
        //  = l2;/
        int carry = 0;
        while(temp1!=NULL || temp2!=NULL){
            int sum = carry;

            if(temp1) sum += temp1->val;
            if(temp2) sum += temp2->val;

            ListNode* newNode = new ListNode(sum%10);
            curr->next = newNode;
            // curr = curr-
            curr = curr->next;
            carry = sum/10;


            if(temp1)temp1 = temp1->next;
            if(temp2)temp2 = temp2->next;
        }

        if(carry){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
            curr = newNode;
        }

        dummyNode = dummyNode->next;
        dummyNode = reverseLL(dummyNode);
        // dummyNode = reverseLL(dummyNode);

        // return ;

        return dummyNode;
    }
};
