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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *prev = &dummy;

        while (head != NULL)
        {
            if (head->next != NULL && head->val == head->next->val)
            {
                while (head->next != NULL && head->val == head->next->val)
                {
                    head = head->next;
                }
                prev->next = head->next;
            }
            else
            {
                prev = head;
            }
            head = head->next;
        }
        return dummy.next;
    }
};

//===============================================
// Only 87/166 testcases passed

// if(head == NULL || head->next == NULL){
//             return head;
//         }

//         ListNode* temp = head;
//         while(temp->next != NULL){

//             if(temp->next->val == temp->val){
//                 while(temp->val == temp->next->val && temp->next->next != NULL){
//                     temp->next = temp->next->next;
//                     // if(temp->next = NULL){
//                     //     return head;
//                     // }
//                 }

//                 temp->val = temp->next->val;
//                 temp->next = temp->next->next;
//             }
//             else
//                 temp = temp->next;
//         }
//         if(temp == head){
//                     return temp->next;
//                 }
//         return head;