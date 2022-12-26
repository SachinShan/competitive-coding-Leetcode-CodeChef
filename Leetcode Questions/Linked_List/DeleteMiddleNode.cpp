class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = NULL;
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }

        // slow->val = slow->next->val;
        prev->next = slow->next;

        return head;
    }
};