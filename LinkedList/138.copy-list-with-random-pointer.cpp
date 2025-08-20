/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *curr = head;
        Node *nxt = nullptr;
        if (!curr)
            return nullptr;
        while (curr)
        {
            Node *newNode = new Node(curr->val);
            nxt = curr->next;
            curr->next = newNode;
            newNode->next = nxt;
            curr = nxt;
        }
        curr = head;
        while (curr)
        {
            if (curr->random)
            {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node *newHead = head->next;
        Node *copy = newHead;
        while (curr)
        {
            curr->next = copy->next;
            if (copy->next)
                copy->next = copy->next->next;
            curr = curr->next;
            copy = copy->next;
        }
        return newHead;
    }
};
// @lc code=end
