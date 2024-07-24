/*
 * @lc app=leetcode id=1290 lang=cpp
 *
 * [1290] Convert Binary Number in a Linked List to Integer
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
   int findLen(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        return len;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp  = head;
        int place = findLen(head)-1;
        int res = 0;
        while(temp!=NULL){
            res += (temp->val)*pow(2,place);
            temp = temp->next;
            place--;
        }
        return res;
        

    }
};
// @lc code=end

