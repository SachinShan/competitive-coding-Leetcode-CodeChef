class Solution
{
public:
    vector<int> divisibilityArray(string word, int m)
    {
        vector<int> uttar(word.size(), 0);
        long long num = 0;
        for (int i = 0; i < word.size(); i++)
        {

            num = (num * 10 + (word[i] - '0'));
            num = num % m;
            if (num == 0)
            {
                uttar[i] = 1;
            }
        }
        return uttar;
    }
};

//     string temp = "";

//     int n = word.size();
//     vector<int> uttar(n, 0);

//     for(int i=0; i<n; i++){
//         temp += word[i];

//         long long int nun = stoi(temp);
//         if(nun%m == 0){
//             uttar[i] = 1;
//         }
//     }
//     return uttar;
