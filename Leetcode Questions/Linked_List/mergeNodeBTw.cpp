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
    ListNode *mergeNodes(ListNode *head)
    {

        //     head = head->next;
        //     ListNode *temp = head;
        //     while(temp->next != NULL){
        //         ListNode *sum;
        //         sum = temp;
        //         while(temp->val != 0){
        //             // sum->val = sum->val + temp->next->val;
        //             sum->val=sum->val+temp->val;
        //             temp->next = temp->next->next;
        //         }
        //         temp = sum;
        //         temp = temp->next;
        //     }
        //     return head;
        // return head;

        ListNode *start = head;
        ListNode *temp = head->next;
        while (temp != NULL)
        {
            if (temp->val != 0)
            {
                start->val = start->val + temp->val;
            }
            else
            {
                start->next = temp->next;
                if (temp->next != NULL)
                {

                    temp = temp->next;
                    start = start->next;
                }
            }
            temp = temp->next;
        }
        return head;
    }
};