class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<bool> ans(n, false);

        queue<int> q;
        q.push(0);

        ans[0] = true;

        while (!q.empty())
        {
            int index = q.front();
            q.pop();

            for (auto i : rooms[index])
            {
                if (!ans[i])
                {
                    ans[i] = true;
                    q.push(i);
                }
            }
        }

        for (auto i : ans)
        {
            if (!i)
            {
                return false;
            }
        }
        return true;
    }
};

// queue<int> q;
//         vector<bool> ans(rooms.size(), false);

//         int index = 0;
//         for(int i=0; i<rooms[index].size(); i++){
//             q.push(rooms[index][i]);
//         }
//         ans[0] = true;

//         while(!q.empty()){
//             index = q.front();
//             for(int i=0; i<rooms[index].size(); i++){
//                 q.push(rooms[index][i]);
//             }
//             ans[index] = true;
//             q.pop();
//         }

//         for(int i=0; i<ans.size(); i++){
//             if(ans[i] == false){
//                 return false;
//             }
//         }
//         return true;