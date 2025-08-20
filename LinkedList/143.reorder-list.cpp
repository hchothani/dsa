/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Now we have the ends of the two divided lists

        ListNode *prev = nullptr;
        ListNode *curr = slow->next;
        slow->next = nullptr;
        ListNode *nxt = nullptr;
        while (curr)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        // Now we have reservesed the second half

        ListNode *l1 = head;
        ListNode *l2 = prev;
        while (l2)
        {
            ListNode *nxt1 = l1->next;
            ListNode *nxt2 = l2->next;
            l1->next = l2;
            l2->next = nxt1;
            l1 = nxt1;
            l2 = nxt2;
        }
    }
};
// @lc code=end
