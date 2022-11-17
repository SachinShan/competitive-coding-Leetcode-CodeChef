/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if (fast == NULL)
        {
            return head->next;
        }
        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};

// ListNode *temp;
//         temp = head;
//         int count = 0;
//         while(temp->next != NULL){
//             count++;
//             temp = temp->next;
//         }
//         int k = count - n + 1;
//         int i=1;
//         temp = head;
//         while(i!=k){
//             temp = temp->next;
//             i++;
//         }
//         if(temp->next != NULL)
//         {
//             temp = temp->next;
//             temp->next = temp->next->next;
//         }

//         return head;