class Solution
{
public:
    bool flower(int ind, int n, vector<int> &arr)
    {
        if (n == 0)
        {
            return true;
        }
        if (ind >= arr.size())
        {
            return false;
        }

        if (arr[ind] == 1)
        {
            return flower(ind + 2, n, arr);
        }
        else
        {
            if (ind != 0 && arr[ind - 1] == 1)
            {
                return flower(ind + 1, n, arr);
            }
            else if (ind != arr.size() - 1 && arr[ind + 1] == 1)
            {
                return flower(ind + 2, n, arr);
            }
            else
            {
                return flower(ind + 2, n - 1, arr);
            }
        }
    }

    bool canPlaceFlowers(vector<int> &arr, int n)
    {

        return flower(0, n, arr) || flower(1, n, arr);
    }
};