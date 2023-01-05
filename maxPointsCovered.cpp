vector<vector<int>> past(1001, vector<int>(0));
for (auto i : arr)
{
    past[i[0]].push_back(i[1]);
}
int mark = 0;
int l = 1, r = x;
vector<int> vec(1001, 0);
for (int i = 1; i <= r; i++)
{
    for (auto k : past[i])
    {
        vec[k]++;
    }
}
for (int i = x + 1; i <= 1000; i++)
{
    for (auto k : past[i])
    {
        vec[k]++;
    }
    int utttar = 0;
    for (int j = 1; j <= y; j++)
    {
        utttar = utttar + vec[j];
    }
    mark = max(ans, mark);
    for (int j = y + 1; j <= 1000; j++)
    {
        utttar = utttar + vec[j];
        mark = max(ans, mark);
        utttar = utttar - vec[j - y];
    }
    mark = max(ans, mark);

    for (auto k : past[i - x])
    {
        vec[k]--;
    }
}
return mark;