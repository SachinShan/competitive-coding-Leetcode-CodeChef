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
        int carry = 0;
        ListNode *ans = NULL;
        int sum = l1->val + l2->val;

        while (l1 || l2 || carry)
        {
            int val1 = 0, val2 = 0;
            if (l1)
                val1 = l1->val;
            if (l2)
                val2 = l2->val;
            sum = val1 + val2 + carry;

            ans = insert_tail(ans, sum % 10);
            carry = sum / 10;

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return ans;
    }
};

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