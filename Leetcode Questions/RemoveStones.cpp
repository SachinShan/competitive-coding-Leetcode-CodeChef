// Priority Queue is a Stack which keeps the elements in sorted order and the top element is the maximum element

class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {
        priority_queue<int> q;
        int n = piles.size();
        for (int i = 0; i < n; i++)
        {
            q.push(piles[i]);
        }

        for (int i = 1; i <= k; i++)
        {
            int num = q.top();
            q.pop();
            num -= floor(num / 2);
            q.push(num);
        }
        int sum = 0;
        while (!q.empty())
        {
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};

// int n = piles.size();
//         unordered_map<int, int> mapp;

//         for(int i=0; i<n; i++){
//             mapp[piles[i]] = i;
//         }
//         for(int i=1; i<=k; i++){
//             // int x = *max_element(piles.begin(), piles.end());

//             int ind = mapp[x];
//             piles[ind] -= floor(piles[ind]/2);
//         }

//         int sum = 0;
//         for(int i=0; i<n; i++){
//             sum += piles[i];
//         }
//         return sum;