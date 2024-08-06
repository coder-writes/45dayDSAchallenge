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

    void reverseLL(ListNode* leftNode,ListNode* rightNode){
        ListNode* temp = leftNode;
        ListNode* prev = NULL;
        ListNode* final = rightNode->next;
        while(temp!=final){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        

    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL || left == right ) return head;
        // ListNode* temp1 = head;
        // ListNode* temp = head;
        // // ListNode* temp2 = head;
        // ListNode* leftNode = NULL;
        // ListNode* prev = NULL;
        // ListNode* front = NULL;
        // ListNode* rightNode = NULL;
        // while(temp!=NULL){
        //     if(temp->val == left){
        //         prev = temp1;
        //         leftNode = temp;
        //     }
        //     if(temp->val == right)
        //     {
        //         front = temp->next;
        //         rightNode = temp;
        //     }
        //     // if(leftNode!=NULL && rightNode!=NULL){
        //     //     prev->next = rightNode;
        //     //     rightNode->next = leftNode->next;
        //     // }
        //     temp1  = temp;
        //     temp = temp->next;
        // }
        // reverseLL(leftNode,rightNode);
        // prev->next = rightNode;
        // leftNode->next = front;

        // return head;

        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode* prev = dummyNode;

        //this will store one element prior to the left index;
        for(int i=1;i<left;i++){
            prev  =prev->next;
        }
        ListNode* start = prev->next;

        ListNode* end = start;
        for(int i=left;i<right;i++){
            end = end->next;
        }

        ListNode* front = end->next;

        reverseLL(start,end);


        prev->next = end;
        start->next = front;

        return dummyNode->next;





    }
};