class Solution
{
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks)
    {
        int n = capacity.size();
        vector<int> diff(n, 0);

        for (int i = 0; i < n; i++)
        {
            diff[i] = capacity[i] - rocks[i];
        }

        sort(diff.begin(), diff.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (diff[i] <= additionalRocks)
            {
                count++;
                additionalRocks = additionalRocks - diff[i];
            }
        }
        return count;
    }
};

// for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(rocks[i] < rocks[j]){
//                     swap(rocks[i], rocks[j]);
//                     swap(capacity[i], capacity[j]);
//                 }
//             }
//         }
//         int count = 0;
//         for(int i=0; i<n; i++){
//             // if(additionalRocks <= 0){
//             //     break;
//             // }
//             if(capacity[i] == rocks[i]){
//                 count++;
//             }
//             else{
//                 int diff = capacity[i] - rocks[i];
//                 if(diff <= additionalRocks){
//                     additionalRocks = additionalRocks - diff;
//                     count++;
//                 }
//             }
//         }
//         return count;