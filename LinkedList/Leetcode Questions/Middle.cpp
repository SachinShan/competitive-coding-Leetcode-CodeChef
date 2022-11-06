class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        int count = 0;
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }

        // if(count%2 == 0){
        //     return slow->next;
        // }
        // else{
        //     return slow;
        // }
        return slow;
    }
};