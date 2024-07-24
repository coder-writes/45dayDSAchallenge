/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        // a dummyNode is created to start the linked list for avoiding the troubles at later stage, we can solve this question even without dummyNode but it can be more complicated.

    ListNode* dummyNode = new ListNode(-1);
    // this node is created to store the current position in the resulting linked list.
    ListNode* curr = dummyNode;
    //This two temp1,temp2 is created to traverse in the linked list without even tampering the head.
    ListNode* temp1 = head1;
    ListNode* temp2 = head2;
    // this is to store the carry.
    int carry = 0;

    while(temp1!=NULL || temp2!=NULL)
    {
        int sum  = carry;
        //if  temp1 is available then add it in sum.
        if(temp1)  sum +=temp1->val;
        //if temp2 is available then add it in sum.
        if(temp2) sum+=temp2->val;
        
        // create a newNode that store the sum.
        ListNode* newNode = new ListNode(sum%10);
        // this stores the carry
        carry = sum/10;
        
        // to store the current position .
        curr->next = newNode;
        curr = curr->next;

        // if(temp1 and temp2 both are availabele then only increase the temp1 and temp2 other it will throw the null Pointer Exception)
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry)
    {
        ListNode*  newNode = new ListNode(carry);
        curr->next = newNode;
    }

    return dummyNode->next;
    }
};
// @lc code=end

