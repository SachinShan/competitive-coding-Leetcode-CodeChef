// Bruteforce approach

class Solution
{
public:
    long long minimumTime(vector<int> &time, int totalTrips)
    {
        int n = time.size();
        vector<int> trip(n, 0);

        int hrs = 1;
        int ans = 0;
        while (ans < totalTrips)
        {
            for (int i = 0; i < n; i++)
            {
                trip[i] = hrs / time[i];
            }

            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                temp += trip[i];
            }
            ans = temp;
            hrs++;
        }
        return hrs - 1;
    }
};

// Binary Search

class Solution
{
public:
    long long int trip(long long int hrs, vector<int> &time)
    {

        long long int totalnoOFtrips = 0;
        for (int i = 0; i < time.size(); i++)
        {
            long long int timeTaken = time[i];
            totalnoOFtrips += hrs / timeTaken;
        }

        return totalnoOFtrips;
    }

    long long minimumTime(vector<int> &time, int totalTrips)
    {
        long long int l = 1;
        long long int r = 1e14;

        while (l < r)
        {
            long long int mid = (l + r) / 2;

            if (trip(mid, time) >= totalTrips)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};