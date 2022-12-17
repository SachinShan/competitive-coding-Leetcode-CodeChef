
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define size_2 100002

ll vec_2[4 * size_2];
void ouert(ll shitt, ll one, ll antim, const ll *vec, ll utm)
{
    if (one == antim)
    {
        vec_2[shitt] = (1LL * vec[one]) % utm;
        return;
    }
    ll pdaw = (one + antim) >> 1;
    ouert(2 * shitt, one, pdaw, vec, utm);
    ouert(2 * shitt + 1, pdaw + 1, antim, vec, utm);
    vec_2[shitt] = (vec_2[2 * shitt] * vec_2[2 * shitt + 1]) % utm;
}
ll check(ll shitt, ll one, ll antim, ll start, ll end, ll utm)
{
    if (one > antim)
    {
        return 1;
    }
    if (one > end)
    {
        return 1;
    }
    if (antim < start)
    {
        return 1;
    }
    if (one >= start)
    {
        if (antim <= end)
        {
            return vec_2[shitt] % utm;
        }
    }
    ll pdaw = (one + antim) >> 1;
    ll set_1 = check(2 * shitt, one, pdaw, start, end, utm);
    ll set_2 = check(2 * shitt + 1, pdaw + 1, antim, start, end, utm);
    ll count = (set_1 * set_2) % utm;
    return count;
}
ll adfhuehhgugej(ll vec[], ll size, ll utm)
{
    ll count = 0;
    for (ll i = 0; i < size; i++)
    {
        for (ll j = i; j < size; j++)
        {
            ll temp = check(1, 0, size - 1, i, j, utm);
            if (temp == 0)
            {
                count++;
            }
        }
    }
    return count;
}

void ncbbeiouirb()
{

    ll n, utm;
    cin >> n >> utm;
    ll vec[n];
    for (ll i = 0; i < n; i++)
        cin >> vec[i];

    ll size = sizeof(vec) / sizeof(vec[0]);

    ouert(1, 0, size - 1, vec, utm);
    ll c = adfhuehhgugej(vec, size, utm);
    if (c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int kh;
    cin >> kh;
    while (kh--)
    {
        ncbbeiouirb();
    }

    return 0;
}