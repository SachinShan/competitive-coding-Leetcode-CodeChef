#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int health, chhota, bda;
        cin >> health >> chhota >> bda;

        int count = 1;
        if (health <= bda)
        {
            cout << count << endl;
        }
        else
        {
            health = health - bda;
            // count += ceil(health/chhota);
            if (health % chhota == 0)
            {
                count += health / chhota;
            }
            else
            {
                count += health / chhota;
                count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}
