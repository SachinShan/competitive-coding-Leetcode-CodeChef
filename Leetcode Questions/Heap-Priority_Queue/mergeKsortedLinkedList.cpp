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
        if (lists.size() == 0)
        {
            return NULL;
        }
        // priority_queue <ListNode, vector<ListNode>, greater<ListNode> > pq;
        priority_queue<int, vector<int>, greater<int>> pq;

        ListNode *root = NULL;
        ListNode *head = root;

        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *temp = lists[i];
            while (temp != NULL)
            {
                // pq.push(temp);
                // temp = temp->next;
                pq.push(temp->val);
                temp = temp->next;
            }
        }

        while (!pq.empty())
        {
            ListNode *temp = new ListNode(pq.top());
            pq.pop();

            if (root == NULL)
            {
                root = temp;
                head = root;
            }
            else
            {
                head->next = temp;
                head = head->next;
            }
        }

        return root;
    }
};
