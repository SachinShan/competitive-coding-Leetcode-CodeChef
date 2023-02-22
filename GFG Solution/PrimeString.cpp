bool isPrime(int ginti)
{
    if (ginti == 1)
        return false;
    for (int i = 2; i <= ginti / 2; i++)
    {
        if (ginti % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<int> findBots(vector<string> &usernames, int n)
{

    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        int arr[26] = {0};
        int sum = 0;
        for (int j = 0; j < usernames[i].length(); j += 2)
        {
            arr[usernames[i][j] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != 0)
                sum += 1;
        }
        // cout<<sum<<endl;
        if (isPrime(sum))
            res.push_back(1);
        else
            res.push_back(0);
    }
    return res;