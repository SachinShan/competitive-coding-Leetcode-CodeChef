class Solution
{
public:
    int minOperations(int n)
    {
        vector<int> arr;

        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int x = (i * 2) + 1;
            arr.push_back(x);

            res += abs(n - ((i * 2) + 1));
        }

        return res / 2;
    }
};

// This is completly correct answer but....... its facing an issue of TLE

class Solution
{
public:
    int minOperations(int n)
    {
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x = (i * 2) + 1;
            arr.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        int m = n - 1, i = 0;
        int count = 0;
        while (i < m)
        {
            while (arr[i] != arr[m])
            {
                arr[i]++;
                arr[m]--;

                count++;
            }
            i++;
            m--;
        }
        return count;
    }
};