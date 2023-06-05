class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coor)
    {
        int n = coor.size();
        if (n <= 2)
        {
            return true;
        }
        // int m = (coor[1][1] - coor[0][1])/(coor[1][0]-coor[0][0]);
        int m, temp;

        for (int i = 2; i < n; i++)
        {

            m = (coor[i - 1][1] - coor[i - 2][1]) * (coor[i][0] - coor[i - 1][0]);

            temp = (coor[i][1] - coor[i - 1][1]) * (coor[i - 1][0] - coor[i - 2][0]);

            if (temp != m)
            {
                return false;
            }
        }
        return true;
    }
};