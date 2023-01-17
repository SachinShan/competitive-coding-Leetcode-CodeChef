class Solution
{
public:
    TreeNode *makeTree(vector<int> &arr, int i, int j)
    {
        if (i > j)
        {
            return NULL;
        }
        int mid = (i + j) / 2;

        TreeNode *root = new TreeNode(arr[mid]);

        root->left = makeTree(arr, i, mid - 1);
        root->right = makeTree(arr, mid + 1, j);

        return root;
    }

    TreeNode *sortedListToBST(ListNode *head)
    {
        if (head == NULL)
        {
            return NULL;
        }

        vector<int> temp;
        while (head != NULL)
        {
            temp.push_back(head->val);
            head = head->next;
        }
        int n = temp.size();

        return makeTree(temp, 0, n - 1);
    }
};