class Solution
{
public:
    // void bfs(int node, vector<vector<int>>& graph, vector<int> &visited){
    //     visited[node] = 1;
    //     queue<pair<int, int>> q;
    //     q.push({node, 1});

    //     while(!q.empty()){
    //         int color = q.front().second;
    //         int n = q.front().first;
    //         q.pop();

    //         for(auto adcntNode : graph[n]){
    //             if(visited[adcntNode] == -1){
    //                 if(color == 1){
    //                     q.push({adcntNode, 0});
    //                     visited[adcntNode] = 0;
    //                 }
    //                 else{
    //                     q.push({adcntNode, 1});
    //                     visited[adcntNode] = 1;
    //                 }
    //             }
    //         }
    //     }
    // }

    // bool isBipartite(vector<vector<int>>& graph) {
    //     int n = graph.size();
    //     vector<int> visited(n, -1);

    //     for(int i=0; i<n; i++){
    //         if(visited[i] == -1){
    //             bfs(i, graph, visited);
    //         }
    //     }

    //     for(int i=1; i<n; i++){
    //         if(visited[i] == visited[i-1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    bool bfs(int st, vector<vector<int>> &graph, vector<int> &color)
    {

        queue<int> q;
        q.push(st);
        color[st] = 0;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();

            for (auto i : graph[node])
            {
                if (color[i] == -1)
                {
                    q.push(i);
                    color[i] = !color[node];
                }
                else if (color[i] == color[node])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();

        vector<int> color(n, -1);

        for (int i = 0; i < n; i++)
        {
            if (color[i] == -1)
            {
                if (!bfs(i, graph, color))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
