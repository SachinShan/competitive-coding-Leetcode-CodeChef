class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {

            sort(words[i].begin(), words[i].end());
            words[i].erase(unique(words[i].begin(), words[i].end()), words[i].end());

            string ans = words[i];
            for (int j = i + 1; j < words.size(); j++)
            {
                sort(words[j].begin(), words[j].end());
                words[j].erase(unique(words[j].begin(), words[j].end()), words[j].end());

                string anss = words[j];
                if (ans == anss)
                {
                    count++;
                }
            }
        }

        return count;
    }
};