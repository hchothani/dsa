/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode dummy(0);
        ListNode *tail = &dummy;
        ListNode *slowPrev = tail;
        tail->next = head;
        if (!head->next)
            return nullptr;
        while (fast && n > 1)
        {
            fast = fast->next;
            n--;
        }
        while (fast && fast->next)
        {
            slowPrev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        slowPrev->next = slow->next;
        delete (slow);
        return tail->next;
    }
};
// @lc code=end
