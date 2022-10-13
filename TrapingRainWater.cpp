#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    // if (height.empty())
    //     return 0;
    int ans = 0;
    int size = height.size();
    // int left[size], right[size];
    vector<int> left(size), right(size);
    left[0] = height[0];
    // left[0] = 0;
    right[size - 1] = height[size - 1];
    // right[size - 1] = 0;

    // loop won't run from the zeroth index because usse phle to kch h hi nhi
    for (int i = 1; i < size; i++)
    {
        left[i] = max(height[i], left[i - 1]);
    }

    for (int i = size - 2; i >= 0; i--)
    {
        right[i] = max(height[i], right[i + 1]);
    }

    for (int i = 1; i < size - 1; i++)
    {
        ans += min(left[i], right[i]) - height[i];
    }

    return ans;
}

int main()
{
    int n, x;
    vector<int> height;
    cout << "Enter the size of the vector ";
    cin >> n;
    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        height.push_back(x);
    }

    cout << trap(height);
}