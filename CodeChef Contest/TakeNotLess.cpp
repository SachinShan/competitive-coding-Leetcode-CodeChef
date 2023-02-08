#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int lkj;
    cin >> lkj;
    while (lkj--)
    {
        int fghj;
        cin >> fghj;
        //  priority_queue <int> pq;
        vector<int> tctfyu;
        for (int i = 0; i < fghj; i++)
        {
            int k;
            cin >> k;
            tctfyu.push_back(k);
            // pq.push(k);
        }
        sort(tctfyu.begin(), tctfyu.end());
        map<int, int> yicy;

        char w = 'm';
        for (int i = tctfyu.size() - 1; i >= 0; i--)
        {
            yicy[tctfyu[i]]++;
        }
        w = 'z';

        for (auto i : yicy)
        {
            if (i.second % 2 != 0)
            {
                w = 'm';
            }
        }

        if (w == 'z')
        {
            cout << "Zenyk" << endl;
        }
        else
        {
            cout << "Marichka" << endl;
        }
    }

    return 0;
}