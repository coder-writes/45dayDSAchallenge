/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
ListNode* reverseLL(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* temp = head;
    ListNode* prev = NULL;
    while(temp!=NULL){
        ListNode* backup = temp->next;
        temp->next = prev;
        prev = temp;
        temp = backup; 
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        if(head==NULL ||  head->next==NULL) return 1;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next->next!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseLL(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second!=NULL){
            if(first->val!=second->val){
                return 0;
            }
            first =first->next;
            second = second->next;
        }

        reverseLL(newHead);
        return 1;

    }
};
// @lc code=end

