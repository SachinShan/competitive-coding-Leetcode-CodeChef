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
private:
    void reverseLinkedList(ListNode *&head, ListNode *curr, ListNode *prev)
    {
        // base case
        if (curr == NULL)
        {
            head = prev;
            return;
        }

        ListNode *forward = curr->next;
        reverseLinkedList(head, forward, curr);
        curr->next = prev;
    }

public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *curr = head;
        ListNode *prev = NULL;
        reverseLinkedList(head, curr, prev);
        return head;
    }
};