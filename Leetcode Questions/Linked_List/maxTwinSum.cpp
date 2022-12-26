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
    int pairSum(ListNode *head)
    {
        stack<ListNode *> ss;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = slow->next;
        while (slow != NULL)
        {
            ss.push(slow);
            slow = slow->next;
        }
        int res = 0, sum;
        while (!ss.empty())
        {
            sum = 0;
            sum = head->val + ss.top()->val;
            head = head->next;
            ss.pop();
            if (res < sum)
            {
                res = sum;
            }
        }
        return res;
    }
};
