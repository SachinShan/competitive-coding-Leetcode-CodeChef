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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        //  Time Limit Exceeded
        ListNode *result = new ListNode();
        ListNode *head = result;
        for (int i = 0; i < lists.size() - 1; i++)
        {
            ListNode *l1 = lists[i];
            ListNode *l2 = lists[i + 1];

            while (l1 != NULL && l2 != NULL)
            {
                if (l1->val < l2->val)
                {
                    result->next = l1;
                    l1 = l1->next;
                }
                else
                {
                    result->next = l2;
                    l2 = l2->next;
                }

                result = result->next;
            }

            if (l1 != NULL)
            {
                result->next = l1;
            }
            else
            {
                result->next = l2;
            }
        }

        return head->next;
    }
};
