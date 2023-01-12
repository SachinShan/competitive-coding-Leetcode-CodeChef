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
    ListNode *detectCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            return NULL;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *flag = head;

        while (fast != NULL && fast->next != NULL && slow->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;

            if (slow == fast)
            {
                while (slow != flag)
                {
                    // fast = fast->next;
                    flag = flag->next;
                    slow = slow->next;
                }
                return flag;
            }
        }
        // fast = head;
        return NULL;
    }
};