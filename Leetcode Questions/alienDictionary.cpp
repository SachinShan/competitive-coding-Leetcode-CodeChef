class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        unordered_map<char, int> mapp;

        for (int i = 0; i < order.length(); i++)
        {
            mapp[order[i]] = i;
        }

        for (int i = 0; i < words.size() - 1; i++)
        {
            string a = words[i];
            string b = words[i + 1];

            int flag = 1;
            for (int j = 0; j < min(a.length(), b.length()); j++)
            {

                if (mapp[a[j]] < mapp[b[j]])
                {
                    flag = 0;
                    break;
                }
                else if (mapp[a[j]] > mapp[b[j]])
                {
                    return false;
                }
                // else if(mapp[a[j]] == mapp[b[j]]){
                //     if(a.length() > b.length()){
                //         return false;
                //     }
                // }
            }
            if (flag && a.length() > b.length())
            {
                return false;
            }
        }

        return true;
        ;
    }
};