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

    ListNode *reverse(ListNode *head)
    {

        ListNode *curr = head;
        ListNode *prev = NULL;
        reverseLinkedList(head, curr, prev);
        return head;
    }

    ListNode *insert_tail(ListNode *sum, int num)
    {

        ListNode *ptr = new ListNode(num);
        ListNode *temp = sum;
        if (sum == NULL)
        {
            sum = ptr;
            return sum;
        }

        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        return sum;
    }

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = reverse(l1);
        ListNode *temp2 = reverse(l2);
        ListNode *ans = NULL;

        int carry = 0;
        int sum = temp1->val + temp2->val;
        while (temp1 || temp2 || carry)
        {
            int val1 = 0, val2 = 0;
            if (temp1)
                val1 = temp1->val;
            else
                val1 = 0;
            if (temp2)
                val2 = temp2->val;
            else
                val2 = 0;
            sum = val1 + val2 + carry;

            ans = insert_tail(ans, sum % 10);
            carry = sum / 10;

            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }
        ans = reverse(ans);
        return ans;
    }
};