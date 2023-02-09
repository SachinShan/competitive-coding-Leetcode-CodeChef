public:
// Function to return the minimum cost of connecting the ropes.
long long minCost(long long arr[], long long n)
{
    // Your code here
    // priority_queue<int, greater<int*>> pq;/
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }
    long long int ans = 0;
    while (pq.size() > 1)
    {
        long long int a = pq.top();
        pq.pop();
        long long int b = pq.top();
        pq.pop();

        long long int c = a + b;
        ans += c;
        pq.push(c);
    }

    return ans;
}