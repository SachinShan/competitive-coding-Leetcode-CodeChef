class Solution
{
public:
    int helper(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return helper(b, a % b);
    }

    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *newHead = head;
        ListNode *curr = head;

        while (curr && curr->next)
        {
            int gcd = helper(curr->val, curr->next->val);

            ListNode *newNode = new ListNode(gcd);
            newNode->next = curr->next;
            curr->next = newNode;

            curr = curr->next->next;
        }

        return newHead;
    }
};