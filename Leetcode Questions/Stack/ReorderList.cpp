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
    void reorderList(ListNode *head)
    {
        stack<ListNode *> ss;
        int n = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            ss.push(temp);
            n++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 1; i <= n / 2; i++)
        {
            ListNode *element = ss.top();
            ss.pop();
            element->next = temp->next;
            temp->next = element;
            temp = temp->next->next;
        }
        temp->next = NULL;
    }
};