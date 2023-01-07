class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int tGas = 0, tCost = 0;
        tGas = accumulate(gas.begin(), gas.end(), 0);
        tCost = accumulate(cost.begin(), cost.end(), 0);

        if (tGas < tCost)
        {
            return -1;
        }
        int n = gas.size();
        int ind = 0;
        int tank = 0;

        for (int i = 0; i < n; i++)
        {
            if (tank < 0)
            {
                tank = 0;
                ind = i;
            }

            tank += gas[i] - cost[i];
        }

        return ind;
    }
};

// 33/37 Test case passed

// class Solution {
// public:
//     bool check(vector<int>& gas, vector<int>& cost, int ind, int prev){
//         int n = gas.size();
//         int tank = 0;
//         // int tank = gas[ind] - cost[ind];
//         int i = ind;
//         int count = 1;
//         while(count != n){
//             tank = tank + gas[i] - cost[i];
//             if(tank <= 0){
//                 return false;
//             }
//             if(i == prev){
//                 return true;
//             }
//             i = (i+1)%n;
//             count++;
//         }
//         if(tank >= 0)
//             return true;
//         else{
//             return false;
//         }
//     }

//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int i, j;
//         for(int i=0; i<gas.size(); i++){
//             if(i==0){
//                 int j = gas.size()-1;
//             }
//             j = i-1;
//             if(gas[i] >= cost[i]){
//                 bool c = check(gas, cost, i, j);
//                 if(c){
//                     return i;
//                 }
//             }
//         }
//         return -1;
//     }
// };