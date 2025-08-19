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
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while (p2 && p2->next)
        {
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2)
                return true;
        }
        return false;
    }
};

/*
Intuition:

Two Ways:

1 -> We can use a hash map to store the seen nodes and compare
2 -> We can use a slow and faster pointer and if the slow and faster are equal at any point, it is cyclic
3 -> reverse the list, if the rev head and original head are the same, it is cyclic.
*/

// @lc code=end
