/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()) return 1;
            else mp[temp] = 1;

            temp = temp->next;
        }
        return 0;

    }
};
// @lc code=end

